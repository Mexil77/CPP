#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "[ ERROR ] Invalid number of arguments" << std::endl;
		return 1;
	}

	Pmerge sort(argc, ++argv);
	sort.do_merge_insert();

	return 0;
}