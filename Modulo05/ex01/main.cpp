/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:01:32 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/04 19:30:23 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat a("Angela", 13);
	Bureaucrat b("Beto", 130);
	Form A("Alquiler", 100, 75);
	Form B("Bank", 40, 75);

	std::cout << std::endl;

	try
	{
		Form C("Car", 1000, 10);
		Bureaucrat c("Carlos", 1300);
		std::cout << C << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cant be created couse " << e.what() << std::endl;
	} 
	
	std::cout << std::endl;

	a.signForm(A);
	b.signForm(B);
	a.signForm(B);
	b.signForm(A);
	std::cout << a << std::endl;
	std::cout << A << std::endl;
	std::cout << b << std::endl;
	std::cout << B << std::endl;
	return 0;
}
