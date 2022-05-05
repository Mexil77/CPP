/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:54:55 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/05 19:08:49 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat				A("Altair", 1);
	Form					a("Alquiler", 100, 52);
	ShrubberyCreationForm	b("Home");
	RobotomyRequestForm		c("RoborA");
	PresidentialPardonForm	d("Criminal");
	std::cout << std::endl;
	A.signForm(a);
	A.signForm(b);
	A.signForm(c);
	A.signForm(d);
	std::cout << std::endl;
	A.executeForm(a);
	std::cout << std::endl;
	A.executeForm(b);
	std::cout << std::endl;
	A.executeForm(c);
	std::cout << std::endl;
	A.executeForm(d);
	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	return 0;
}
