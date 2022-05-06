/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:43:37 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/06 16:03:51 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>
# include <ostream>

// class Form;

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &obj);
		~Intern();

		Intern&	operator = (const Intern &intern);

		Form*	makeShrubberyForm(std::string targetForm);
		Form*	makeRobotomyForm(std::string targetForm);
		Form*	makePresidentiaPardonForm(std::string targetForm);
		Form*	makeForm(std::string nameForm, std::string targetForm);

		class FormDoesntExistException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form doesnt exist");
				}
		};
};

std::ostream&	operator << (std::ostream &o, const Intern &intern);

#endif