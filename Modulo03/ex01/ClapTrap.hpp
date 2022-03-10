/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:02:15 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/08 14:46:21 by emgarcia         ###   ########.fr       */
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
		std::string		getName(void);
		unsigned int	getHitP(void);
		unsigned int	getEnrP(void);
		unsigned int	getAttD(void);

		ClapTrap(void);
		ClapTrap(std::string Name);
		ClapTrap(std::string N, unsigned int HP, unsigned int EP, unsigned int AD);
		~ClapTrap(void);
	private:
		std::string		_Name;
		unsigned int	_Hitpoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
};

std::ostream&	operator << (std::ostream &o, ClapTrap &clap);

#endif