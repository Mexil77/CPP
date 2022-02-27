/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 07:07:01 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/26 15:41:08 by emgarcia         ###   ########.fr       */
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
