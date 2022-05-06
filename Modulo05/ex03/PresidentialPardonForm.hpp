/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:29:49 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/06 13:35:12 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();

		PresidentialPardonForm&	operator = (const PresidentialPardonForm &shu);

		std::string	getTarget(void) const;

		void		execute(Bureaucrat const &executor) const;
	private:
		const std::string	_target;
};

std::ostream&	operator << (std::ostream &o, PresidentialPardonForm &shu);

#endif
