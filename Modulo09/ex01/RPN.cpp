# include "RPN.hpp"

void printError(std::string error){
	std::cout << error << std::endl;
}

static bool isOK(std::string &str)
{
	std::string operators = "+-*/";
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]) && !isspace(str[i])
			&& operators.find(str[i]) == std::string::npos)
			return false;
	}
	return true;
}

void operate(std::stack<float>& stack, char oper)
{
	if (stack.size() < 2)
    	return printError("ERROR: Not enough numbers in stack to operate");

	float topStackNumber = stack.top();
	stack.pop();
	float resultOperation = stack.top();
	switch (oper)
	{
		case '+':
			resultOperation += topStackNumber;
			break ;
		case '-':
			resultOperation -= topStackNumber;
			break ;
		case '*':
			resultOperation *= topStackNumber;
			break ;
		case '/':
			resultOperation /= topStackNumber;
			break ;
		default:
    		return printError("ERROR: Operation not identified");
	}
	stack.pop();
	stack.push(resultOperation);
}

void RPN::doRPN(std::string arg)
{
	std::stack<float> _stack;
	
	if (!isOK(arg))
		return printError("ERROR: Invalid argument");
    std::string::const_iterator iter = arg.begin();
	while (iter != arg.end())
	{
		if (isdigit(*iter))
			_stack.push(static_cast<float>(*iter - 48));
		else if (!isspace(*iter))
			operate(_stack, *iter);
        ++iter;
	}

	if (_stack.size() == 1)
		std::cout << _stack.top() << std::endl;
	else 
		printError("ERROR: So much numbers in the input");
}