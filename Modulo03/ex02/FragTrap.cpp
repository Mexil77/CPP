/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:06:09 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/08 16:32:30 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("unknown name", 100, 100, 30)
{
	std::cout << "A FragTrap has been created with Default constructor and a unknown name" << std::endl;
}

FragTrap::FragTrap(std::string Name): ClapTrap(Name, 100, 100, 30)
{
	std::cout << "A FragTrap has been created with " << this->getName() << " name." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "A FragTrap " << this->getName() <<" has been destroied." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " give higfive to you." << std::endl;
}
