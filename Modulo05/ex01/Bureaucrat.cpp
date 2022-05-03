/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:01:35 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/03 19:01:47 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Unknown Name"), _grade(150)
{
	std::cout << "The Bureaucrat has been created with a Unknown Name and grade: 150." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	std::cout << "The Bureaucrat has been created with " << obj._name << " as a Name and grade: " << obj._grade << std::endl;
	this->operator=(obj);
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_name = name;
	this->_grade = grade;
	std::cout << "The Bureaucrat has been created with " << name << " as a Name and grade: " << grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "The Bureaucrat " << this->_name << " has been destroied." << std::endl;
}

Bureaucrat&	Bureaucrat::operator = (Bureaucrat const &bur)
{
	std::cout << "The Bureaucrat has been created with " << bur._name << " as a Name and = operator" << std::endl;
	this->_name = bur._name;
	this->_grade = bur._grade;
	return (*this);
}

std::string	Bureaucrat::getName(void) {return this->_name;}

int	Bureaucrat::getGrade(void) {return this->_grade;}

void	Bureaucrat::incrementGrade (void)
{
	std::cout << "Try to increas grade of " << this->_name << " from grade: " << this->_grade << std::endl;
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->_grade -= 1;
		std::cout << "Increast success to " << this->_grade << std::endl;
	}
}

void	Bureaucrat::decrementGrade (void)
{
	std::cout << "Try to decrease grade of " << this->_name << " from grade: " << this->_grade << std::endl;
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->_grade += 1;
		std::cout << "Decrease success to " << this->_grade << std::endl;
	}
}

std::ostream&	operator << (std::ostream &o, Bureaucrat &bur)
{
	o << "Bureaucrat: " << bur.getName() << std::endl;
	o << "Grade: " << bur.getGrade() << std::endl;
	return (o);
}
