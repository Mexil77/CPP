/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:00:12 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/27 18:00:16 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{
	Weapon	aux;

	aux = Weapon();
	this->name = "Uknown name";
	this->weapon = &aux;
	std::cout << "A humanA has been created with an aux wepon and uknown name" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
	std::cout << "A humanA has been created with an " << this->weapon->getType() << " wepon and " << name << "as a name" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "A HumanA : " << this->name << "has been destroied." << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
