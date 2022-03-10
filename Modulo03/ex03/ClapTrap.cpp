/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:01:13 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/10 18:52:02 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Unknown Name"), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "A ClapTrap has been created with Default constructor and a unknown name" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	this->_Name = Name;
	this->_Hitpoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	std::cout << "A ClapTrap has been created with " << _Name << " name." << std::endl;
}

ClapTrap::ClapTrap(std::string N, unsigned int HP, unsigned int EP, unsigned int AD) : _Name(N), _Hitpoints(HP), _EnergyPoints(EP), _AttackDamage(AD)
{
	std::cout << "A ClapTrap has been created with " << _Name << " name." << std::endl;
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

std::string	ClapTrap::getName() const
{
	return (this->_Name);
}

unsigned int	ClapTrap::getHitP() const
{
	return (this->_Hitpoints);
}

unsigned int	ClapTrap::getEnrP() const
{
	return (this->_EnergyPoints);
}

unsigned int	ClapTrap::getAttD() const
{
	return (this->_AttackDamage);
}

void	ClapTrap::setHitP(unsigned int points)
{
	this->_Hitpoints = points;
}

void	ClapTrap::setEnrP(unsigned int points)
{
	this->_EnergyPoints = points;
}

void	ClapTrap::setAttD(unsigned int points)
{
	this->_AttackDamage = points;
}

std::ostream&	operator << (std::ostream &o, ClapTrap &clap)
{
	o << "Name : " << clap.getName() << std::endl;
	o << "HitP : " << clap.getHitP() << std::endl;
	o << "EnrP : " << clap.getEnrP() << std::endl;
	o << "AttD : " << clap.getAttD() << std::endl;
	return (o);
}
