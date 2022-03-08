/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:05:45 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/08 16:08:53 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("unknown name", 100, 50, 20)
{
	std::cout << "A Scaptrap has been created with Default constructor and a unknown name" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name, 100, 50, 20)
{
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
