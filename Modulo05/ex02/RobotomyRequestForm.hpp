/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:59:38 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/05 17:39:17 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();

		RobotomyRequestForm&	operator = (const RobotomyRequestForm &shu);

		std::string	getTarget(void) const;

		void		execute(Bureaucrat const &executor) const;
	private:
		const std::string	_target;
};

std::ostream&	operator << (std::ostream &o, RobotomyRequestForm &shu);

#endif