/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:31:24 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/05 17:38:05 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery-Unknown target", 145, 137), _target("Unknown target")
{
	std::cout << "A Shrubbery Form has been created with an " << this->_target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj.getName(), 145, 137), _target(obj._target)
{
	std::cout << "A Shrubbery Form has been created with a " << this->_target << " as a Target." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery-" + target, 145, 137), _target(target)
{
	std::cout << "A Shrubbery Form has been created with a " << this->_target << " as a Target." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "A Shrubbery Form " << this->_target << " has been destroied." << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator = (const ShrubberyCreationForm &shu)
{
	this->setSigned(shu.isSigned());
	std::cout << "A Shrubbery Form has been created with a " << this->_target << " as a Target and = operator." << std::endl;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const {return (this->_target);}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Shrubbery form has been executed." << std::endl;
}

std::ostream&	operator << (std::ostream &o, ShrubberyCreationForm &shu)
{
	o << "Form : " << shu.getName() << std::endl << "Target: " << shu.getTarget() << std::endl << "IsSigned : " << shu.isSigned() << std::endl << "Grade to Sign: " << shu.getGradeSign() << std::endl << "Grade to Execute: " << shu.getGradeExecute() << std::endl;
	return (o);
}
