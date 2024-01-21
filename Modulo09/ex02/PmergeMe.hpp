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
//no puedo usar map ni stack

class Pmerge
{
	public:
		~Pmerge();
		Pmerge(int argc, char **argv);
		Pmerge(const Pmerge& copy);

		Pmerge operator=(const Pmerge& other);
		void do_merge_insert();
	private:
		std::deque<int> _deque;
		std::vector<int> _vect;
		std::deque<std::pair<int, int> > _aux_deque;
		std::vector<std::pair<int, int> > _aux_vect;
		std::list<int> _list;
		std::clock_t _time_deque;
		std::clock_t _time_vect;
		bool is_odd;
		int _aux_odd;
		Pmerge();
};


#endif