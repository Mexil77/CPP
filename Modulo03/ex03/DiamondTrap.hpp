/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:00:32 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/11 14:06:21 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		void	whoAmI(void);

		DiamondTrap&	operator = (DiamondTrap const &diamond);

		DiamondTrap(void);
		DiamondTrap(std::string Name);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap(void);
	private:
		std::string	_Name;
};

#endif
