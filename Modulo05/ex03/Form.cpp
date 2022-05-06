/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:29:34 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/06 13:34:00 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Unckown Name"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "A form has been created with an Unckown Name." << std::endl;
}

Form::Form(const Form &obj) : _name(obj._name), _signed(obj._signed), _gradeToSign(obj._gradeToSign), _gradeToExecute(obj._gradeToExecute)
{
	std::cout << "A form has been created with " << this->_name << " as a Name." << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();	
	std::cout << "A form has been created with " << this->_name << " as a Name." << std::endl;
}

Form::~Form()
{
	std::cout << "A " << this->_name << " form has been destroied." << std::endl;
}

Form&	Form::operator = (const Form &form)
{
	std::cout << "A form has been created with " << this->_name << " as a Name and = operator" << std::endl;
	this->_signed = form._signed;
	return (*this);
}

std::string	Form::getName(void) const {return (this->_name);}

bool Form::isSigned(void) const {return (this->_signed);}

int	Form::getGradeSign(void) const {return (this->_gradeToSign);}

int	Form::getGradeExecute(void) const {return (this->_gradeToExecute);}

void	Form::setSigned(bool sign) {this->_signed = sign;}

void	Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (!this->_signed)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Neutral form has been executed." << std::endl;
}

std::ostream&	operator << (std::ostream &o, Form &form)
{
	o << "Form : " << form.getName() << std::endl << "IsSigned : " << form.isSigned() << std::endl << "Grade to Sign: " << form.getGradeSign() << std::endl << "Grade to Execute: " << form.getGradeExecute() << std::endl;
	return (o);
}
