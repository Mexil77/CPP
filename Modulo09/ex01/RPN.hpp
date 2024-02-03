#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <string>

class RPN
{
	public:
		~RPN() {};
		RPN& operator=(const RPN& other);
		
		static void doRPN(std::string str);
	private:
		RPN(RPN& copy);
		RPN() {};

};

#endif