# include "RPN.hpp"

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
	{
		stack.pop();
		return ;
	}
	float aux = stack.top();
	stack.pop();
	float aux2 = 0;
	switch (oper)
	{
		case '+':
			aux2 = stack.top() + aux;
			break ;
		case '-':
			aux2 = stack.top() - aux;
			break ;
		case '*':
			aux2 = stack.top() * aux;
			break ;
		case '/':
			aux2 = stack.top() / aux;
			break ;
		default:
			std::cout << "ERROR: Operation not identified" << std::endl;
			return ;
	}
	stack.pop();
	stack.push(aux2);
}

void RPN::doRPN(char *arg)
{
	std::string str(arg);
	std::stack<float> _stack;
	
	if (!isOK(str))
	{
		std::cout << "ERROR: Invalid arguments" << std::endl;
		return ;
	}
	for (std::string::const_iterator iter = str.begin(); iter != str.end(); ++iter)
	{
		if (isdigit(*iter))
			_stack.push(static_cast<float>(*iter - 48));
		else if (!isspace(*iter))
			operate(_stack, *iter);
	}

	if (_stack.size() == 1)
		std::cout << _stack.top() << std::endl;
	else 
		std::cout << "ERROR: Reverse polish notation incomplete" << std::endl;

	return ;
}