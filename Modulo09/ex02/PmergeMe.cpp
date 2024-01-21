#include "PmergeMe.hpp"

Pmerge::Pmerge() {}

Pmerge::~Pmerge() {}

Pmerge::Pmerge(const Pmerge& copy) { *this = copy; }

Pmerge Pmerge::operator=(const Pmerge& other)
{
	if (this == &other)
		return *this;
	this->_deque = other._deque;
	this->_vect = other._vect;
	this->_list = other._list;
	return *this;
}

template <typename T>
void print_nums(std::string str, T& container)
{
	typename T::iterator iter;

	std::cout << str << ": ";
	for (iter = container.begin(); iter != container.end(); ++iter)
		std::cout << " " << *iter;
	std::cout << std::endl;
}

bool isOK(char **argv, int argc, std::list<int> &l)
{
	std::stringstream str;
	float num;
	bool fail = false;

	for (int i = 0; i < argc; i++) {
		str << argv[i];
		
		str >> num;
		if (str.fail() || num < 0) {
			l.clear();
			throw std::runtime_error("[ ERROR ] Invalid arguments");
		}
		else {
			str.clear();
			l.push_back(num);
		}
	}
	return fail;
}

template <typename T, typename aux_T>
std::clock_t fill_container(std::list<int>& list, T& container, aux_T& aux_container)
{
	std::clock_t time = std::clock();
	std::list<int>::iterator iter;

	if (list.size() < 2)
	{
		container.push_back(*iter);
		return (1000000.0 * (clock() - time) / CLOCKS_PER_SEC);
	}
	for (iter = list.begin(); iter != list.end(); ++iter)
		aux_container.push_back(std::make_pair(*iter, *(++iter)));
	return (1000000.0 * (clock() - time) / CLOCKS_PER_SEC);
}

template <typename T>
void print_nums_pairs(std::string str, T& d)
{
	typename T::iterator iter;
	std::pair<int,int> prueba;

	std::cout << str;
	for (iter = d.begin(); iter != d.end(); ++iter)
	{
		prueba = *iter;
		std::cout << " " << prueba.first << "-" << prueba.second << "\t";
	}
	std::cout << std::endl;
}

int find_largest(std::list<int> &list, std::clock_t &time)
{
	std::clock_t aux = std::clock();
	std::list<int>::iterator iter;
	int i = INT_MIN;
	for (std::list<int>::iterator iter = list.begin(); iter != list.end(); ++iter)
	{
		if (*iter > i)
			i = *iter;
	}
	for (std::list<int>::iterator iter = list.begin(); iter != list.end(); ++iter)
	{
		if (*iter == i)
		{
			list.erase(iter);
			return i;
		}
	}
	time = 1000000.0 * (clock() - aux) / CLOCKS_PER_SEC;
	return i;
}

Pmerge::Pmerge(int argc, char** argv)
{
	try {
		if (!isOK(argv, argc - 1, this->_list))
			goto skip_iteration;
	} catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
		exit (1);
	}
	skip_iteration:
		this->is_odd = false;
		if (_list.size() % 2 != 0)
			this->is_odd = true;
		_time_deque = 0.0;
		_time_vect = 0.0;
}

template <typename aux_T>
void sort_recursive(aux_T& aux_cont, int start, int end)
{
	if (end - start > 1)
	{
		int mid = (start + end)/2;

		sort_recursive(aux_cont, start, mid);
		sort_recursive(aux_cont, mid, end);
		aux_T tmp_left(aux_cont.begin() + start, aux_cont.begin() + mid);
		aux_T tmp_right(aux_cont.begin() + mid, aux_cont.begin() + end);
		for (int i = start; i < end; i++)
		{
			if (tmp_left.size() > 0 && (tmp_right.size() == 0 || tmp_right.front().first > tmp_left.front().first))
			{
				*(aux_cont.begin() + i) = tmp_left.front();
				tmp_left.erase(tmp_left.begin());
			}
			else
			{
				*(aux_cont.begin() + i) = tmp_right.front();
				tmp_right.erase(tmp_right.begin());
			}
		}
	}
}

template<typename T, typename aux_T>
void insert_sort(T& cont, aux_T& aux_cont)
{
	bool pair_cont; 

	for(size_t i = 0; i < aux_cont.size(); i++)
	{
		pair_cont = false;
		for (size_t j = 0; j < cont.size(); j++)
		{
			typename T::iterator iter = cont.begin() + j;

			if (aux_cont[i].second < cont[j])
			{
				cont.insert(iter, aux_cont[i].second);
				break;
			}
			else if (iter + 1 == cont.end())
				pair_cont = true;
		}
		if (pair_cont || i == 0)
		{
			cont.push_back(aux_cont[i].second);
		}
		cont.push_back(aux_cont[i].first);
	}
}

template <typename T, typename aux_T>
std::clock_t sort_container(T& cont, aux_T& aux_cont)
{
	std::clock_t time = std::clock();

	for (size_t i = 0; i < aux_cont.size(); i++)
	{
		if (aux_cont[i].second > aux_cont[i].first)
		{
			int aux = aux_cont[i].first;
			aux_cont[i].first = aux_cont[i].second;
			aux_cont[i].second = aux;
		}
	}
	sort_recursive(aux_cont, 0, aux_cont.size());
	insert_sort(cont, aux_cont);
	return (1000000.0 * (clock() - time) / CLOCKS_PER_SEC);
}

void validate_is_sorted(std::vector<int> vect, std::deque<int> deque)
{

	try {
		if (vect.size() == deque.size())
			goto next_check;
		else
			throw "Something went wrong";
	} catch (std::runtime_error &e) {
		std::cout << "Aqui no se que iria" << std::endl;
	}
	next_check:
	for (size_t i = 0; i < vect.size(); i++)
	{
		int num_check;
		if (i == 0)
			num_check = vect[i];
		else 
			num_check = vect[i - 1];

		if (num_check > vect[i] || vect[i] != deque[i])
			throw "Error en el ordenamiento";
	}
	std::cout << "Everything is sorted as expected!" << std::endl;

}

void Pmerge::do_merge_insert()
{
	print_nums("Before: ", _list);

	std::clock_t aux_time = std::clock();
	if (this->is_odd == true)
		this->_aux_odd = find_largest(this->_list, aux_time);
	this->_time_deque = fill_container(this->_list, this->_deque, this->_aux_deque) + aux_time;
	this->_time_vect = fill_container(this->_list, this->_vect, this->_aux_vect) + aux_time;

	if (this->_list.size() < 2)
		goto print_nums;

	this->_time_vect += sort_container(this->_vect, this->_aux_vect);
	this->_time_deque += sort_container(this->_deque, this->_aux_deque);
	if (is_odd == true)
	{
		_deque.push_back(_aux_odd);
		_vect.push_back(_aux_odd);
	}
	print_nums:
	print_nums("After:", _vect);
	std::cout << "Time to sort " << _vect.size() << " numbers with std::vector: " 
			<< _time_vect << "us" << std::endl;
	std::cout << "Time to sort " << _deque.size() << " numbers with std::deque: " 
			<< _time_deque << "us" << std::endl;
	// validate_is_sorted(_vect, _deque);
	_deque.clear();
	_vect.clear();
	_aux_deque.clear();
	_aux_vect.clear();
	_list.clear();

	system("leaks -q PmergeMe");
}