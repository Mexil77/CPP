/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:03:42 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/15 17:14:02 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string s = "Hola mundo";
	std::string *p = &s;
	std::string r&;
	
	std::cout << "string original valor " << s << std::endl;
	std::cout << "string original direccion de memoria " << &s << std::endl;
	std::cout << "puntero valor " << p << std::endl;
	std::cout << "puntero apunta a " << *p << std::endl;
	std::cout << "puntero direccion de memoria " << &p << std::endl;
	std::cout << "referencia valor" << r << std::endl;
	std::cout << "referencia direccion de memoria" << &r << std::endl;
	return 0;
}
