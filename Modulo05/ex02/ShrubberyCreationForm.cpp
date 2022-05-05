/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:31:24 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/05 19:09:19 by emgarcia         ###   ########.fr       */
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


std::string	makeTree(void)
{
	return (
		"                     .o00o\n                   o000000oo\n                  00000000000o\n                 00000000000000\n              oooooo  00000000  o88o\n           ooOOOOOOOoo  ```''  888888\n         OOOOOOOOOOOO'.qQQQQq. `8888'\n        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n         OOOOOOOOO QQQQQQQQQQ/ /QQ\n           OOOOOOOOO `QQQQQQ/ /QQ'\n             OO:F_P:O `QQQ/  /Q'\n                \\. \\ |  // |\n                d\\ \\\\|_////\n                qP| \\ _' `|Ob\n                   \\  / \\  \\Op\n                   |  | O| |\n           _       /\\. \\_/ /\\\n            `---__/|_\\   //|  __\n                  `-'  `-'`-'-'"
	);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::fstream	fdout;
	std::string		tree;
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw Bureaucrat::GradeTooLowException();
	tree = makeTree();
	fdout.open(this->_target + "_shrubbery", std::fstream::out);
	fdout << tree << std::endl;
}

std::ostream&	operator << (std::ostream &o, ShrubberyCreationForm &shu)
{
	o << "Form : " << shu.getName() << std::endl << "Target: " << shu.getTarget() << std::endl << "IsSigned : " << shu.isSigned() << std::endl << "Grade to Sign: " << shu.getGradeSign() << std::endl << "Grade to Execute: " << shu.getGradeExecute() << std::endl;
	return (o);
}

