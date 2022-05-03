/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:21:13 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/03 18:56:33 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		Bureaucrat&	operator = (const Bureaucrat &bur);

		std::string	getName(void);
		int			getGrade(void);
		void		incrementGrade(void);
		void		decrementGrade(void);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The grade is to High.");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The grade is to Low.");
				}
		};
		
	private:
		std::string	_name;
		int			_grade;
};

std::ostream&	operator << (std::ostream &o, Bureaucrat &bur);

#endif
