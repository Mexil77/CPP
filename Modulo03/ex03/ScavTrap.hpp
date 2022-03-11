/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:01:04 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/11 14:29:44 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
		void			guardGate(void);
		virtual void	attack(std::string const & target);

		ScavTrap&	operator = (ScavTrap const &scav);

		ScavTrap(void);
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap& obj);
		virtual	~ScavTrap(void);
};

#endif
