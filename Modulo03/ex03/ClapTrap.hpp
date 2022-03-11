/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:01:10 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/11 14:18:14 by emgarcia         ###   ########.fr       */
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
		virtual void	attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void) const;
		unsigned int	getHitP(void) const;
		unsigned int	getEnrP(void) const;
		unsigned int	getAttD(void) const;
		void			setHitP(unsigned int points);
		void			setEnrP(unsigned int points);
		void			setAttD(unsigned int points);

		ClapTrap&	operator = (ClapTrap const &clap);

		ClapTrap(void);
		ClapTrap(std::string Name);
		ClapTrap(std::string N, unsigned int HP, unsigned int EP, unsigned int AD);
		ClapTrap(const ClapTrap&);
		virtual ~ClapTrap(void);
	protected:
		std::string		_Name;
		unsigned int	_Hitpoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
};

std::ostream&	operator << (std::ostream &o, ClapTrap &clap);

#endif
