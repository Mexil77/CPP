/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:05:55 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/11 16:12:40 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		void	guardGate(void);

		ScavTrap&	operator = (ScavTrap const &scav);

		ScavTrap(void);
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap& obj);
		~ScavTrap(void);
};

#endif
