#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <iostream>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &obj);
		virtual ~BitcoinExchange();
		std::map<std::string, std::string> dataMap;
	private:
};

#endif
