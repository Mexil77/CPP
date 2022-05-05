/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:54:57 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/05 17:13:24 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <exception>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(const Form &obj);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		~Form();

		Form&	operator = (const Form &form);

		std::string		getName(void) const;
		bool			isSigned(void) const;
		int				getGradeSign(void) const;
		int				getGradeExecute(void) const;
		void			setSigned(bool sign);
		void			beSigned(Bureaucrat &bur);

		virtual void	execute(Bureaucrat const &executor) const;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The Form grade is to High.");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The Form grade is to Low.");
				}
		};
		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The Form isnt Signed");
				}
		};
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

std::ostream&	operator << (std::ostream &o, Form &form);

#endif
