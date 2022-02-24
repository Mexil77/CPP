/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexil <mexil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:07:30 by mexil             #+#    #+#             */
/*   Updated: 2022/02/24 23:17:12 by mexil            ###   ########.fr       */
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
