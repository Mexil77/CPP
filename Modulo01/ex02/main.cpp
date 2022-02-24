/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexil <mexil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:03:42 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/24 15:39:03 by mexil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string sbrain = "HI THIS IS BRAIN";
	std::string *stringPTR = &sbrain;
	std::string &stringREF = sbrain;
	
	std::cout << "Direccion de memoria de brain por sbrain " << &sbrain << std::endl;
	std::cout << "Direccion de memoria de brain por strptr " << stringPTR << std::endl;
	std::cout << "Direccion de memoria de brain por strref " << &stringREF << std::endl;
	std::cout << "Valor de brain por strptr " << *stringPTR << std::endl;
	std::cout << "Valor de brain por strref " << stringREF << std::endl;
	return 0;
}
