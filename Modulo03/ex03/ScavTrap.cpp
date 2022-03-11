/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:01:07 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/11 14:23:19 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_Name = "unknown name";
	this->_Hitpoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "A Scaptrap has been created with Default constructor and a unknown name" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
	this->_Name = Name;
	this->_Hitpoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "A ScavTrap has been created with " << this->getName() << " name." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	this->operator=(obj);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "A ScavTrap " << this->getName() <<" has been destroied." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " have enter in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_Name << " attack " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
}

ScavTrap&	ScavTrap::operator = (ScavTrap const &scav)
{
	this->_Name = scav._Name;
	this->_Hitpoints = scav._Hitpoints;
	this->_EnergyPoints = scav._EnergyPoints;
	this->_AttackDamage = scav._AttackDamage;
	return (*this);
}
