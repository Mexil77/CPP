/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:33:03 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/08 12:23:30 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Unknown Name"), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "A ClapTrap has been created with Default constructor and a unknown name" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "A ClapTrap has been created with " << _Name << " name and " << _Hitpoints << " hit points." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "A ClapTrap " << this->_Name <<" has been destroied." << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_Name << " attack " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_EnergyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is already dead, cant take more damage." << std::endl;
		return ;
	}
	if (this->_EnergyPoints < amount)
	{
		std::cout << "ClapTrap " << this->_Name << " is dead after " << this->_EnergyPoints << " of damage." << std::endl;
		this->_EnergyPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->_Name << " has recive " << amount << " of damage." << std::endl;
		this->_EnergyPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints == UINT_MAX)
	{
		std::cout << "ClapTrap " << this->_Name << " is full of Energy Points, cant take more energy points." << std::endl;
		return ;
	}
	if ((UINT_MAX - this->_EnergyPoints) < amount)
	{
		std::cout << "ClapTrap " << this->_Name << " is full of Energy with " << UINT_MAX << " of energy points." << std::endl;
		this->_EnergyPoints = UINT_MAX;
	}
	else
	{
		std::cout << "ClapTrap " << this->_Name << " has recive " << amount << " of energy ponints." << std::endl;
		this->_EnergyPoints += amount;
	}
}
