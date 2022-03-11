/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:00:59 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/11 13:33:07 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_Name = "unknown name";
	this->_Hitpoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "A FragTrap has been created with Default constructor and a unknown name" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	this->_Name = Name;
	this->_Hitpoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "A FragTrap has been created with " << this->getName() << " name." << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	this->operator=(obj);
}

FragTrap::~FragTrap(void)
{
	std::cout << "A FragTrap " << this->getName() <<" has been destroied." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " give higfive to you." << std::endl;
}

FragTrap&	FragTrap::operator = (FragTrap const &frag)
{
	this->_Name = frag._Name;
	this->_Hitpoints = frag._Hitpoints;
	this->_EnergyPoints = frag._EnergyPoints;
	this->_AttackDamage = frag._AttackDamage;
	return (*this);
}
