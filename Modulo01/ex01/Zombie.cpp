/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:33:46 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/15 14:51:47 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	std::cout << "A zombie has been CREATED." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "The zombie: " << this->_name << " has been CREATED." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "The zombie: " << this->_name << " has been DESTROYED." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string name)
{
	this->_name = name;
}
