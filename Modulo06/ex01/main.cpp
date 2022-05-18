/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:42:00 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/18 16:41:52 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

class Int
{
	int x;

	public:
    Int(int x_in = 0) : x(x_in)
    {
		std::cout << "Conversion Ctor called" << std::endl;
    }
    operator std::string()
    {
		std::cout << "Conversion Operator" << std::endl;
		return std::to_string(x);
    }
};

int main(void)
{
	Int obj(3);
	std::string str = obj;
	std::cout << "str: " << str << std::endl;
	obj = 20;
	std::string str2 = static_cast<std::string>(obj);
	obj = static_cast<Int>(30);
	return 0;
}
