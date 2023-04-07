#include "BitcoinExchange.hpp"

int	main(void)
{
	BitcoinExchange bitExch;
	bitExch.dataMap["c"] = "1";
	bitExch.dataMap["b"] = "2";
	bitExch.dataMap["a"] = "3";

	BitcoinExchange bitExchCopi(bitExch);
	std::cout << "{" << std::endl;
	std::map<std::string, std::string>::iterator iter;
	for (iter = bitExchCopi.dataMap.begin(); iter != bitExchCopi.dataMap.end(); iter++)
	{
		std::cout	<< iter->first << ':' << iter->second << "," << std::endl;
	}
	std::cout << "}" << std::endl;
	return 0;
}
