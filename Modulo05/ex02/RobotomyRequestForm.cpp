/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:59:41 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/05 18:43:42 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy-Unknown target", 72, 45), _target("Unknown target")
{
	std::cout << "A Robotomy Form has been created with an " << this->_target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj.getName(), 72, 45), _target(obj._target)
{
	std::cout << "A Robotomy Form has been created with a " << this->_target << " as a Target." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy-" + target, 72, 45), _target(target)
{
	std::cout << "A Robotomy Form has been created with a " << this->_target << " as a Target." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "A Robotomy Form " << this->_target << " has been destroied." << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator = (const RobotomyRequestForm &shu)
{
	this->setSigned(shu.isSigned());
	std::cout << "A Robotomy Form has been created with a " << this->_target << " as a Target and = operator." << std::endl;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const {return (this->_target);}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	srand (time(NULL));
	int	random = rand() % 10 + 1;

	if (!this->isSigned())
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << random << "<-- Number" << std::endl;
	if (random % 2 == 0)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->_target << " robotomized has feilure." << std::endl;
}

std::ostream&	operator << (std::ostream &o, RobotomyRequestForm &shu)
{
	o << "Form : " << shu.getName() << std::endl << "Target: " << shu.getTarget() << std::endl << "IsSigned : " << shu.isSigned() << std::endl << "Grade to Sign: " << shu.getGradeSign() << std::endl << "Grade to Execute: " << shu.getGradeExecute() << std::endl;
	return (o);
}
