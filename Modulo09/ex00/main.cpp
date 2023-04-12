#include "BitcoinExchange.hpp"
#include <fstream>
#include <bits/stdc++.h>

void	printMap(std::map<std::string, std::string> m){

	std::cout << "{" << std::endl;
	std::map<std::string, std::string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		std::cout	<< iter->first << ':' << iter->second << "," << std::endl;
	}
	std::cout << "}" << std::endl;
}

void	fillMap(std::map<std::string, std::string> &m, std::fstream *fdin) {
	std::string	cadena;
	std::string	str;
	int					i;

	while (!fdin->eof())
	{
		*fdin >> cadena;
		std::stringstream	ss(cadena);
		std::string				key;
		std::string				value;
		i = 0;
		while (getline(ss, str, ','))
			i++ % 2 == 0 ? key = str : value = str;
		m[key] = value;
	}
}

int	main(void)
{
	std::fstream		fdin;
	BitcoinExchange	bitExch;

	fdin.open("data.csv", std::fstream::in);
	if (!fdin)
	{
		std::cout << "Error de lectura" << std::endl;
		return(0);
	}
	fillMap(bitExch.dataMap, &fdin);
	fdin.close();
	printMap(bitExch.dataMap);
	return 0;
}
