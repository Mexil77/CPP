/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:00:32 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/27 18:00:33 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	this->name = "Uknown name";
	std::cout << "A HumanB has been created with a uknown name" << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	std::cout << "A HumanB has been created with " << name << " as a name" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "A HumanB " << this->name << " has been destroied." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	std::cout << "A HumanB " << this->name << " now has a " << this->weapon->getType() << " weapon." << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
