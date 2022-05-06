/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:43:35 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/06 16:04:16 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "An inter has been creaed, no body know his name." << std::endl;
}

Intern::Intern(const Intern &obj)
{
	(void) obj;
	std::cout << "An inter has been copied, OMG this s a plage!!!." << std::endl;
}

Intern::~Intern()
{
	std::cout << "An inter has been destroied, no body cares who was." << std::endl;
}

Intern&	Intern::operator = (const Intern &intern)
{
	(void) intern;
	std::cout << "An inter has been copied with = operator, just as usless!!!." << std::endl;
	return (*this);
}

Form*	Intern::makeShrubberyForm(std::string targetForm)
{
	ShrubberyCreationForm	*shu = new ShrubberyCreationForm(targetForm);
	std::cout << "Intern creates ShrubberyCreationForm." << std::endl;
	return (*shu);
}

Form*	Intern::makeRobotomyForm(std::string targetForm)
{
	RobotomyRequestForm	*rob = new RobotomyRequestForm(targetForm);
	std::cout << "Intern creates RobotomyRequestForm." << std::endl;
	return (*rob);
}

Form*	Intern::makePresidentiaPardonForm(std::string targetForm)
{
	PresidentialPardonForm	*pres = new PresidentialPardonForm(targetForm);
	std::cout << "Intern creates PresidentialPardonForm." << std::endl;
	return (*pres);
}

Form*	Intern::makeForm(std::string nameForm, std::string targetForm)
{
	std::string	options[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form& (Intern::*arrPtr[])(std::string targetForm) = {&Intern::makeShrubberyForm, &Intern::makeRobotomyForm, &Intern::makePresidentiaPardonForm};
	int i = -1;

	std::cout << std::endl;
	std::cout << "Llegue" << std::endl;
	std::cout << std::endl;
	while (i++ < 3)
		if (options[i] == nameForm)
			return ((this->*arrPtr[i])(targetForm));
	throw Intern::FormDoesntExistException();
}

std::ostream&	operator << (std::ostream  &o, const Intern &intern)
{
	(void) intern;
	o << "What you want to know?, im an Intern, same as the others." << std::endl;
	return (o);
}
