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
void	print_nums(std::string str, T& container, int odd)
{
	typename T::iterator iter;

	std::cout << str;
	for (iter = container.begin(); iter != container.end(); ++iter)
		std::cout << " " << *iter;
	if (odd != -1)
		std::cout << " " << odd;
	std::cout << std::endl;
}

template<typename T>
void	print_pairs(std::string str, T& container, int odd)
{
	typename T::iterator iter;
	std::cout << str << " ";
	for  (iter = container.begin(); iter != container.end(); iter++)
		std::cout << " | " << (*iter).first << " " << (*iter).second;
	if (odd != -1)
		std::cout <<  " | " << odd;
	std::cout << std::endl;
}

void	isOK(std::string argv[], int argc, std::list<int> &l)
{
	std::stringstream str;
	float num;

	for (int i = 0; i < argc; i++) {
		str << argv[i];
		
		str >> num;
		if (str.fail() || num < 0) {
			l.clear();
			throw std::runtime_error("ERROR: Invalid arguments");
		}
		else {
			str.clear();
			l.push_back(num);
		}
	}
}

Pmerge::Pmerge(int argc, std::string argv[])
{
	try {
		isOK(argv, argc - 1, this->_list);
	} catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
		exit (1);
	}
	this->_odd_deque = -1;
	this->_odd_vect = -1;
	if (_list.size() % 2 != 0)
	{
		this->_odd_vect = _list.back();
		this->_odd_deque = _list.back();
		_list.pop_back();
	}
	gettimeofday(&_start_vect, NULL);
	gettimeofday(&_start_deque, NULL);
}

// fill vector with numbers and _aux versión with pairs
// pairs are automatically saved with in order within the pair
void	Pmerge::fillVector()
{
	for (std::list<int>::iterator iter = _list.begin(); iter != _list.end(); iter++)
	{
		int value_aux = *iter;
		std::advance(iter, 1);
		std::pair<int, int> aux(value_aux, *iter);

		_vect.push_back(value_aux);
		_vect.push_back(*iter);

		if (aux.first < aux.second)
			std::swap(aux.first, aux.second);
		_aux_vect.push_back(aux);
	}
}

void	Pmerge::fillDeque()
{
	for (std::list<int>::iterator iter = _list.begin(); iter != _list.end(); iter++)
	{
		int value_aux = *iter;
		std::advance(iter, 1);
		std::pair<int, int> aux(value_aux, *iter);

		_deque.push_back(value_aux);
		_deque.push_back(*iter);

		if (aux.first < aux.second)
			std::swap(aux.first, aux.second);
		_aux_deque.push_back(aux);
	}
}

// recursive function to swap pairs and sort by first element
void	Pmerge::sortPairsVector(size_t size)
{
	if (size <= 1)
		return ;
	sortPairsVector(size - 1);

	std::pair<int, int> final = _aux_vect[size - 1];
	int index = size - 2;
	while  (index >= 0 && _aux_vect[index].first > final.first)
	{
		_aux_vect[index + 1] = _aux_vect[index];
		index--;
	}
	_aux_vect[index + 1] = final;
}

void	Pmerge::sortPairsDeque(size_t size)
{
	if (size <= 1)
		return ;
	sortPairsDeque(size - 1);

	std::pair<int, int> final = _aux_deque[size - 1];
	int index = size - 2;
	if  (index >= 0 && _aux_deque[index].first > final.first)
	{
		_aux_deque[index + 1] = _aux_deque[index];
		index--;
	}
	_aux_deque[index + 1] = final;
}

// find final position in vector or keep dividing 
size_t	Pmerge::binaryInsertionRecursiveVector(int value, ssize_t left, ssize_t right)
{
	if (right <= left)
	{
		if (value > _vect[left])
			return (left + 1);
		return (left);
	}
	ssize_t middle = (left + right) / 2;
	if (value == _vect[middle])
		return (middle + 1);
	if (value > _vect[middle])
		return (binaryInsertionRecursiveVector(value, middle + 1, right));
	return (binaryInsertionRecursiveVector(value, left, middle - 1));
}

size_t	Pmerge::binaryInsertionRecursiveDeque(int value, ssize_t left, ssize_t right)
{
	if (right <= left)
	{
		if (value > _deque[left])
			return (left + 1);
		return (left);
	}
	ssize_t middle = (left + right) / 2;
	if (value == _deque[middle])
		return (middle + 1);
	if (value > _deque[middle])
		return (binaryInsertionRecursiveDeque(value, middle + 1, right));
	return (binaryInsertionRecursiveDeque(value, left, middle - 1));
}

// insert nums in pairs in correct order in vector
// use recursive function to divide pairs vector and find position in final vector, then insert in correct position
void	Pmerge::mergePairsVector()
{
	std::pair<int,int> first = _aux_vect.front();
	_vect.insert(_vect.begin(), first.first);
	_vect.insert(_vect.begin(), first.second);
	for (size_t i = 1; i < _aux_vect.size(); i++)
	{
		ssize_t pos_second = binaryInsertionRecursiveVector((_aux_vect.begin() + i)->second, 0, _vect.size() - 1);
		_vect.insert(_vect.begin() + pos_second, _aux_vect[i].second);
		ssize_t pos_first = binaryInsertionRecursiveVector((_aux_vect.begin() + i)->first, 0, _vect.size() - 1);
		_vect.insert(_vect.begin() + pos_first, _aux_vect[i].first);
	}
}

void	Pmerge::mergePairsDeque()
{
	std::pair<int,int> first = _aux_deque.front();
	_deque.insert(_deque.begin(), first.first);
	_deque.insert(_deque.begin(), first.second);
	for (size_t i = 1; i < _aux_deque.size(); i++)
	{
		ssize_t pos_second = binaryInsertionRecursiveDeque((_aux_deque.begin() + i)->second, 0, _deque.size() - 1);
		_deque.insert(_deque.begin() + pos_second, _aux_deque[i].second);
		ssize_t pos_first = binaryInsertionRecursiveDeque((_aux_deque.begin() + i)->first, 0, _deque.size() - 1);
		_deque.insert(_deque.begin() + pos_first, _aux_deque[i].first);
	}
}

// get jacobsthal  index
size_t	getJacobsthalValue(size_t jacobsthalIdx)
{
	if (jacobsthalIdx == 0 || jacobsthalIdx == 1)
		return jacobsthalIdx;
	size_t i_1 = 1;
	size_t i_0 = 0;
	for (size_t n = 2; n <= jacobsthalIdx; n++)
	{
		size_t aux = i_1 + (2 * i_0);
		i_0 = i_1;
		i_1 = aux;
	}
	return i_1 - 1;
}

// use jacobsthal index recursively to get position to insert in vector
void	Pmerge::mergePairsJacobsthalVector()
{
	size_t j_index = 3;
	size_t min = getJacobsthalValue(j_index - 1);
	size_t index = getJacobsthalValue(j_index);

	_vect.insert(_vect.begin(), _aux_vect.begin()->first);
	_vect.insert(_vect.begin(), _aux_vect.begin()->second);
	while (1)
	{
		if (index > min)
		{
			ssize_t pos_second = binaryInsertionRecursiveVector(((_aux_vect.begin() + index))->second, 0, _vect.size() - 1);
			_vect.insert(_vect.begin() + pos_second, _aux_vect[index].second);
			ssize_t pos_first = binaryInsertionRecursiveVector((_aux_vect.begin() + index)->first, 0, _vect.size() - 1);
			_vect.insert(_vect.begin() + pos_first, _aux_vect[index].first);
			index--;
		}
		else
		{
			min = getJacobsthalValue(j_index);
			j_index++;
			index = getJacobsthalValue(j_index);
			if (min >= _aux_vect.size() - 1)
				break ;
			while (index > _aux_vect.size() - 1)
				index--;
		}
	}
}

void	Pmerge::mergePairsJacobsthalDeque()
{
	size_t j_index = 3;
	size_t min = getJacobsthalValue(j_index - 1);
	size_t index = getJacobsthalValue(j_index);

	_deque.insert(_deque.begin(),  _aux_deque.begin()->first);
	_deque.insert(_deque.begin(),  _aux_deque.begin()->second);
	while (1)
	{
		if (index > min)
		{
			ssize_t pos_second = binaryInsertionRecursiveDeque(((_aux_deque.begin() + index))->second, 0, _deque.size() - 1);
			_deque.insert(_deque.begin() + pos_second, _aux_deque[index].second);
			ssize_t pos_first = binaryInsertionRecursiveDeque((_aux_deque.begin() + index)->first, 0, _deque.size() - 1);
			_deque.insert(_deque.begin() + pos_first, _aux_deque[index].first);
			index--;
		}
		else
		{
			min = getJacobsthalValue(j_index);
			j_index++;
			index = getJacobsthalValue(j_index);
			if (min >= _aux_deque.size() - 1)
				break ;
			while (index > _aux_deque.size() - 1)
				index--;
		}
	}
}

// convert start and end times to string in microseconds 
std::string	Pmerge::getTimeLapsed(timeval& start, timeval& end)
{	
	time_t sec = end.tv_sec - start.tv_sec;
	suseconds_t us = end.tv_usec - start.tv_usec;
	if (us < 0)
	{
		sec--;
		us += 1000000;
	}
	std::ostringstream stream;
	stream << sec;
	std::string str = stream.str();
	str += ".";
	stream << us;
	str += stream.str();
	return str;
}

void	Pmerge::printBefore()
{
	std::cout << "Before: ";
	for (std::list<int>::iterator iter = _list.begin(); iter != _list.end(); iter++)
		std::cout << *iter << " ";
	if (_odd_deque != -1)
		std::cout << _odd_vect;
	std::cout << std::endl;
}

void	Pmerge::printAfter()
{
	std::cout << "After: ";
	for (std::vector<int>::iterator iter = _vect.begin(); iter != _vect.end(); iter++)
		std::cout << *iter << " ";
	std::cout  << std::endl;
	std::cout <<  "Time to sort a range of " << _deque.size() << " elements with std::deque: "
		<< getTimeLapsed(_start_deque, _time_deque) << " us" << std::endl;
	std::cout <<  "Time to sort a range of " << _vect.size() << " elements with std::vector: "
		<< getTimeLapsed(_start_vect, _time_vect) << " us" << std::endl;
}


void	Pmerge::sortDeque()
{	
	fillDeque();
	sortPairsDeque(_aux_deque.size());
	_deque.clear();

	if (_aux_deque.size() > 2)
		mergePairsJacobsthalDeque();
	else 
		mergePairsDeque();

	if (_odd_deque != -1)
	{
		size_t pos = binaryInsertionRecursiveDeque(_odd_deque, 0, _deque.size()  - 1);
		_deque.insert(_deque.begin() + pos, _odd_deque);
		_odd_deque = -1;
	}
	_aux_deque.clear();
	gettimeofday(&_time_deque, NULL);
}

void	Pmerge::sortVector()
{
	fillVector();
	sortPairsVector(_aux_vect.size());
	_vect.clear();

	if (_aux_vect.size() > 2)
		mergePairsJacobsthalVector();
	else 
		mergePairsVector();

	if (_odd_vect != -1)
	{
		size_t pos = binaryInsertionRecursiveVector(_odd_vect, 0, _vect.size()  - 1);
		_vect.insert(_vect.begin() + pos, _odd_vect);
		_odd_vect = -1;
	}
	_aux_vect.clear();
	gettimeofday(&_time_vect, NULL);
}

void	Pmerge::doFordJohnson()
{
	printBefore();
	if (_list.size() < 2)
		throw std::runtime_error("Nothing to sort");
	sortVector();
	sortDeque();
	
	printAfter();
	_list.clear();
}