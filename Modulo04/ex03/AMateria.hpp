/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:00:11 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/18 14:14:53 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const & type);
		virtual ~AMateria(void);

		AMateria	&operator = (const AMateria &material);

		std::string const	&getType(void) const; //Returns the materia type
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
	protected:
		std::string	_type;
};

#endif
