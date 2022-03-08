/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:33:57 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/08 12:22:06 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <limits.h>

class	ClapTrap
{
	public:
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		ClapTrap(void);
		ClapTrap(std::string Name);
		~ClapTrap(void);
	private:
		std::string		_Name;
		unsigned int	_Hitpoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
};

#endif