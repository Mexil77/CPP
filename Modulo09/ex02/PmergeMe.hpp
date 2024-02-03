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

		void do_ford_johnson();
		void fill_vector();
		void fill_deque();

		void sort_vector();
		void sort_deque();

		void print_before();
		void print_after();
		std::string get_time_lapsed(timeval& start, timeval& end);

		void sort_pairs_vector(size_t size);
		void sort_pairs_deque(size_t size);

		void merge_pairs_vector();
		void merge_pairs_jacobsthal_vector();
		void merge_pairs_deque();
		void merge_pairs_jacobsthal_deque();

		size_t binary_insertion_recursive_vector(int value, ssize_t right, ssize_t left);
		size_t binary_insertion_recursive_deque(int value, ssize_t right, ssize_t left);
    private:
		std::deque<int> _deque;
		std::vector<int> _vect;
		std::deque<std::pair<int, int> > _aux_deque;
		std::vector<std::pair<int, int> > _aux_vect;
		std::list<int> _list;

		struct timeval _start_deque;
		struct timeval _start_vect;
		struct timeval _time_deque;
		struct timeval _time_vect;
		int _odd_deque;
		int _odd_vect;
		
		Pmerge();
};


#endif