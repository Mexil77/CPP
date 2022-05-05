/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:07:39 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/05 18:19:45 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon-Unknown target", 25, 5), _target("Unknown target")
{
	std::cout << "A PresidentialPardon Form has been created with an " << this->_target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj.getName(), 25, 5), _target(obj._target)
{
	std::cout << "A PresidentialPardon Form has been created with a " << this->_target << " as a Target." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon-" + target, 25, 5), _target(target)
{
	std::cout << "A PresidentialPardon Form has been created with a " << this->_target << " as a Target." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "A PresidentialPardon Form " << this->_target << " has been destroied." << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator = (const PresidentialPardonForm &shu)
{
	this->setSigned(shu.isSigned());
	std::cout << "A PresidentialPardon Form has been created with a " << this->_target << " as a Target and = operator." << std::endl;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void) const {return (this->_target);}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

std::ostream&	operator << (std::ostream &o, PresidentialPardonForm &shu)
{
	o << "Form : " << shu.getName() << std::endl << "Target: " << shu.getTarget() << std::endl << "IsSigned : " << shu.isSigned() << std::endl << "Grade to Sign: " << shu.getGradeSign() << std::endl << "Grade to Execute: " << shu.getGradeExecute() << std::endl;
	return (o);
}