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
	return *this;
}

// AuxFunctions
void	printPair(std::pair<int, int> pairToPrint){
	std::cout << "pairToPrint: [ " << pairToPrint.first << ", " << pairToPrint.second << " ]" << std::endl;
}

void	printVector(std::vector<int> vect){
	std::cout << "[ ";
	for (std::vector<int>::iterator it = vect.begin(); it < vect.end(); it++)
		std::cout << *it << ", ";
	std::cout << "]" << std::endl;
}

void	Pmerge::printAllPairsVector(){
	for (int i = 0; i < (int)this->_pairVect.size(); i++)
		printPair(this->_pairVect[i]);
}

void	swapPairContentVector(std::pair<int,int> &pairToSwap) {
	int auxNumber = pairToSwap.first;
	pairToSwap.first = pairToSwap.second;
	pairToSwap.second = auxNumber;
}

void	isOK(std::string argv[], int argc)
{
	std::stringstream str;
	float num;

	for (int i = 0; i < argc; i++) {
		str << argv[i];
		str >> num;

		if (str.fail() || num < 0) 
			throw std::runtime_error("ERROR: Invalid arguments");
		str.clear();
	}
}

void	Pmerge::fillContainers(std::string argv[], int argc) {
	std::stringstream	str;
	float				num;

	for (int i = 0; i < argc; i++) {
		str << argv[i];
		str >> num;
		str.clear();
		this->_vect.push_back(num);
		this->_deque.push_back(num);
		if (i % 2 != 0 && i > 0){
			this->_pairVect.push_back(std::pair<int, int>(_vect[i - 1], _vect[i]));
			this->_pairDeque.push_back(std::pair<int, int>(_vect[i - 1], _vect[i]));
		}
	}
}

Pmerge::Pmerge(int argc, std::string argv[])
{
	try {
		isOK(argv, argc - 1);
	} catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
		exit (1);
	}
	gettimeofday(&_start_vect, NULL);
	gettimeofday(&_start_deque, NULL);
	this->fillContainers(argv, argc - 1);
	this->_odd_deque = -1;
}

void	Pmerge::swapPairInVector(int idx) {
	std::pair<int, int> auxPair = this->_pairVect[idx];
	this->_pairVect[idx] = this->_pairVect[idx - 1];
	this->_pairVect[idx - 1] = auxPair;
}

void	Pmerge::sortEachPairsVector()
{
	for (int i = 0; i < (int)this->_pairVect.size(); i++)
		if (this->_pairVect[i].first > this->_pairVect[i].second)
			swapPairContentVector(this->_pairVect[i]);
}

void	Pmerge::sortPairsVector()
{
	int i = 1;
	int j;
	while (i < (int)this->_pairVect.size() && (j = i++))
		while (j > 0 && this->_pairVect[j - 1].second > this->_pairVect[j].second)
			swapPairInVector(j--);
}

void	Pmerge::sortPairsDeque(size_t size)
{
	if (size <= 1)
		return ;
	sortPairsDeque(size - 1);

	std::pair<int, int> final = _pairDeque[size - 1];
	int index = size - 2;
	if  (index >= 0 && _pairDeque[index].first > final.first)
	{
		_pairDeque[index + 1] = _pairDeque[index];
		index--;
	}
	_pairDeque[index + 1] = final;
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

void	Pmerge::mergePairsVector()
{
	if (this->_pairVect.size() == 1)
	{
		this->_vect.push_back(this->_pairVect[0].first);
		this->_vect.push_back(this->_pairVect[0].second);
	}
	
}

void	Pmerge::mergePairsDeque()
{
	std::pair<int,int> first = _pairDeque.front();
	_deque.insert(_deque.begin(), first.first);
	_deque.insert(_deque.begin(), first.second);
	for (size_t i = 1; i < _pairDeque.size(); i++)
	{
		ssize_t pos_second = binaryInsertionRecursiveDeque((_pairDeque.begin() + i)->second, 0, _deque.size() - 1);
		_deque.insert(_deque.begin() + pos_second, _pairDeque[i].second);
		ssize_t pos_first = binaryInsertionRecursiveDeque((_pairDeque.begin() + i)->first, 0, _deque.size() - 1);
		_deque.insert(_deque.begin() + pos_first, _pairDeque[i].first);
	}
}

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

int	jacobsthal(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

std::vector<int>	buildJacobSecuence(std::vector<int> arr){
	std::vector<int>	end_sequence;
	int					jacob_index = 3;

    while (jacobsthal(jacob_index) < (int)arr.size() - 1)
        end_sequence.push_back(jacobsthal(jacob_index++));
    return end_sequence;
}

bool	isInVector(std::vector<int> vect, int toFind){
	for (std::vector<int>::iterator iter = vect.begin(); iter < vect.end(); iter++)
		if (*iter == toFind) return true;
	return false;
}

std::vector<int>::iterator	findIterPosBinaryInsertion(std::vector<int> *vect, int iterValueToFind){
	int	start = 0;
	int	end = vect->size() - 1;
	int	comp = 0;
	std::vector<int>::iterator	iterPosition;

	while (start <= end)
	{
		comp = (start + end) / 2;
		if ((*vect)[comp] <= iterValueToFind)
		{
			if (comp < (int)vect->size() - 1 && (*vect)[comp + 1] > iterValueToFind)
				return vect->begin() + comp + 1;
			start = comp + 1;
		}
		else if ((*vect)[comp] > iterValueToFind)
		{
			if (comp > 0 && (*vect)[comp - 1] < iterValueToFind)
				return vect->begin() + comp;
			end = comp - 1;
		}
	}
	return vect->begin() + start;
}

std::vector<int>::iterator	findIterPosToInsert(std::vector<int> *vect, int iterValueToFind){
	for (std::vector<int>::iterator it = vect->begin(); it < vect->end(); it++)
		if (*it >= iterValueToFind) return it;
	return vect->end();
}

void	Pmerge::mergePairsJacobsthalVector()
{
	size_t				iterator = 1;
	std::vector<int>	pend;
	std::vector<int>	idxSequence;
	std::vector<int>	jacobSecuence;
	bool				isJacobianComp = false;
	int					pendSelected;

	for (int i = 0; i < (int)this->_pairVect.size(); i++){
		this->_vect.push_back(this->_pairVect[i].second);
		pend.push_back(this->_pairVect[i].first);
	}
	this->_vect.insert(this->_vect.begin(), pend[0]);
	idxSequence.push_back(1);
	jacobSecuence = buildJacobSecuence(pend);
	while (iterator <= pend.size())
	{
		if (jacobSecuence.size() != 0 && !isJacobianComp)
		{
			idxSequence.push_back(jacobSecuence[0]);
			pendSelected = pend[jacobSecuence[0] - 1];
			jacobSecuence.erase(jacobSecuence.begin());
			isJacobianComp = true;
		}else {
			if (isInVector(idxSequence, iterator)) iterator++;
			pendSelected = pend[iterator - 1];
			idxSequence.push_back(iterator);
			isJacobianComp = false;
		}
		// std::vector<int>::iterator	iteratorPos = findIterPosBinaryInsertion(&this->_vect, pendSelected);

		this->_vect.insert(findIterPosBinaryInsertion(&this->_vect, pendSelected), pendSelected);
		iterator++;
	}
}

void	Pmerge::mergePairsJacobsthalDeque()
{
	size_t j_index = 3;
	size_t min = getJacobsthalValue(j_index - 1);
	size_t index = getJacobsthalValue(j_index);

	_deque.insert(_deque.begin(),  _pairDeque.begin()->first);
	_deque.insert(_deque.begin(),  _pairDeque.begin()->second);
	while (1)
	{
		if (index > min)
		{
			ssize_t pos_second = binaryInsertionRecursiveDeque(((_pairDeque.begin() + index))->second, 0, _deque.size() - 1);
			_deque.insert(_deque.begin() + pos_second, _pairDeque[index].second);
			ssize_t pos_first = binaryInsertionRecursiveDeque((_pairDeque.begin() + index)->first, 0, _deque.size() - 1);
			_deque.insert(_deque.begin() + pos_first, _pairDeque[index].first);
			index--;
		}
		else
		{
			min = getJacobsthalValue(j_index);
			j_index++;
			index = getJacobsthalValue(j_index);
			if (min >= _pairDeque.size() - 1)
				break ;
			while (index > _pairDeque.size() - 1)
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
	std::cout << "Before:	";
	for (int i = 0; i < (int)this->_vect.size(); i++)
		std::cout << this->_vect[i] << "	";
	std::cout << std::endl;
}

void	Pmerge::printAfter()
{
	std::cout << "After:	";
	for (std::vector<int>::iterator iter = this->_vect.begin(); iter != this->_vect.end(); iter++)
		std::cout << *iter << "	";
	std::cout  << std::endl;
	std::cout <<  "Time to sort a range of " << _deque.size() << " elements with std::deque: "
		<< getTimeLapsed(_start_deque, _time_deque) << " us" << std::endl;
	std::cout <<  "Time to sort a range of " << _vect.size() << " elements with std::vector: "
		<< getTimeLapsed(_start_vect, _time_vect) << " us" << std::endl;
}


void	Pmerge::sortDeque()
{	
	sortPairsDeque(_pairDeque.size());
	_deque.clear();

	if (_pairDeque.size() > 2)
		mergePairsJacobsthalDeque();
	else 
		mergePairsDeque();

	if (_odd_deque != -1)
	{
		size_t pos = binaryInsertionRecursiveDeque(_odd_deque, 0, _deque.size()  - 1);
		_deque.insert(_deque.begin() + pos, _odd_deque);
		_odd_deque = -1;
	}
	_pairDeque.clear();
	gettimeofday(&_time_deque, NULL);
}

void	Pmerge::sortVector()
{
	int		oddVector = -1;
	sortEachPairsVector();
	sortPairsVector();
	if (this->_vect.size() % 2 != 0)
		oddVector = _vect.back();
	_vect.clear();

	if (_pairVect.size() >= 2)
		mergePairsJacobsthalVector();
	else 
		mergePairsVector();

	if (oddVector > -1)
		this->_vect.insert(findIterPosBinaryInsertion(&this->_vect, oddVector), oddVector);
	_pairVect.clear();
	gettimeofday(&_time_vect, NULL);
}

void	Pmerge::doFordJohnson()
{
	printBefore();
	if (_vect.size() < 2)
		throw std::runtime_error("Nothing to sort");
	sortVector();
	sortDeque();
	
	printAfter();
}