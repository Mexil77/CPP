#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <deque>
# include <vector>
# include <list>
# include <fstream>
# include <cstring>
# include <exception>
# include <cstdlib>
# include <sys/time.h>

//no puedo usar map ni stack

class Pmerge
{
	public:
		~Pmerge();
		Pmerge(int argc, std::string argv[]);
		Pmerge(const Pmerge& copy);

		Pmerge operator=(const Pmerge& other);

		void		printAllPairsVector();

		void		doFordJohnson();
		void		fillContainers(std::string argv[], int argc);

		void		sortVector();
		void		sortDeque();

		void		printBefore();
		void		printAfter();
		std::string	getTimeLapsed(timeval& start, timeval& end);

		void		sortEachPairsVector();
		void		sortPairsVector();
		void		swapPairInVector(int idx);
		void		sortPairsDeque(size_t size);

		void		mergePairsVector();
		void		mergePairsJacobsthalVector();
		void		mergePairsDeque();
		void		mergePairsJacobsthalDeque();

		size_t	binaryInsertionRecursiveVector(int value, ssize_t right, ssize_t left);
		size_t	binaryInsertionRecursiveDeque(int value, ssize_t right, ssize_t left);
    private:
		std::deque<int>						_deque;
		std::vector<int>					_vect;
		std::deque<std::pair<int, int> >	_pairDeque;
		std::vector<std::pair<int, int> >	_pairVect;

		struct timeval						_start_deque;
		struct timeval						_start_vect;
		struct timeval						_time_deque;
		struct timeval						_time_vect;
		int									_odd_deque;
		
		Pmerge();
};


#endif