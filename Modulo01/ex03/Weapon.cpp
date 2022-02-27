/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:01:01 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/27 18:01:02 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "The Weapon has bean created without type." << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "The Weapon has bean created with " << type << " as a type." << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "The weapon has bean destroied." << std::endl;
}

std::string	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
