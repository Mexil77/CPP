/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:55:04 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/05 16:53:10 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		Bureaucrat&	operator = (const Bureaucrat &bur);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form &form);

		void		executeForm(Form const &form);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The Bureaucrat grade is to High.");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The Bureaucrat grade is to Low.");
				}
		};
		
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream&	operator << (std::ostream &o, Bureaucrat &bur);

#endif
