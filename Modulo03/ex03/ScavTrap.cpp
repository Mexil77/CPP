/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:01:07 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/10 18:45:27 by emgarcia         ###   ########.fr       */
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

ScavTrap::ScavTrap(std::string Name) : ClapTrap (Name)
{
	this->_Name = Name;
	this->_Hitpoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "A ScavTrap has been created with " << this->getName() << " name." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "A ScavTrap " << this->getName() <<" has been destroied." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " have enter in Gate keeper mode." << std::endl;
}
