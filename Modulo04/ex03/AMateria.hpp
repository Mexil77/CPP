/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:00:11 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/17 16:35:44 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const & type);
		~AMateria(void);

		AMateria	&operator = (const AMateria &material);

		std::string const	&getType(void) const; //Returns the materia type
		void				setType(std::string type);
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
	protected:
		std::string	_type;
};

#endif