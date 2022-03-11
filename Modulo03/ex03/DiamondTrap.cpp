/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:00:50 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/11 14:09:19 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Unknown name_clap_name"), ScavTrap("Unknown name"), FragTrap("Unknown name")
{
	std::cout << "A DiamondTrap has been created with Default constructor and a unknown name" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : ScavTrap(Name), FragTrap(Name)
{
	this->ClapTrap::_Name = Name + "_clap_name";
	this->DiamondTrap::_Name = Name;
	std::cout << "A DiamondTrap has been created with " << this->DiamondTrap::_Name << " name." << std::endl;
	this->_Hitpoints = this->FragTrap::_Hitpoints;
	this->_EnergyPoints = this->ScavTrap::_EnergyPoints;
	this->_AttackDamage = this->FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
	this->operator=(obj);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "A DiamondTrap " << this->DiamondTrap::_Name << " has been destroied." << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is : " << this->DiamondTrap::_Name << std::endl;
	std::cout << "My ClapTrap name is : " << this->ClapTrap::_Name << std::endl;
}

DiamondTrap&	DiamondTrap::operator = (DiamondTrap const &diamond)
{
	this->_Name = diamond._Name;
	this->_Hitpoints = diamond._Hitpoints;
	this->_EnergyPoints = diamond._EnergyPoints;
	this->_AttackDamage = diamond._AttackDamage;
	return (*this);
}
