/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:00:50 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/10 18:42:03 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Unknown name_clap_name"), ScavTrap("Unknown name"), FragTrap("Unknown name")
{
	std::cout << "A DiamondTrap has been created with Default constructor and a unknown name" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap (Name + "_clap_Name"), ScavTrap ( Name  ), FragTrap( Name )
{
	this->ClapTrap::_Name = Name + "_clap_name";
	this->_Name = Name;
	std::cout << "A DiamondTrap has been created with " << this->getName() << " name." << std::endl;
	std::cout << "FragHP : " << this->FragTrap::getHitP() << std::endl;
	std::cout << "FragEP : " << this->FragTrap::getEnrP() << std::endl;
	std::cout << "FragAP : " << this->FragTrap::getAttD() << std::endl;
	std::cout << "ScavHP : " << this->ScavTrap::getHitP() << std::endl;
	std::cout << "ScavEP : " << this->ScavTrap::getEnrP() << std::endl;
	std::cout << "ScavAP : " << this->ScavTrap::getAttD() << std::endl;
	std::cout << "ClapHP : " << this->ClapTrap::getHitP() << std::endl;
	std::cout << "ClapEP : " << this->ClapTrap::getEnrP() << std::endl;
	std::cout << "ClapAP : " << this->ClapTrap::getAttD() << std::endl;
	this->_Hitpoints = this->FragTrap::getHitP();
	this->_EnergyPoints = this->ScavTrap::getEnrP();
	this->_AttackDamage = this->FragTrap::getAttD();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "A DiamondTrap " << this->getName() <<" has been destroied." << std::endl;
}