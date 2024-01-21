#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <iostream>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange(const BitcoinExchange &obj);
		BitcoinExchange(std::string nameDbFile);
		~BitcoinExchange(void);
		void printMap(void);
		void fillMap(std::string nameDbFile);
		double getValueByDate(std::string date);
	private:
		BitcoinExchange(void);
		std::map<std::string, double> dataMap;
};

#endif
