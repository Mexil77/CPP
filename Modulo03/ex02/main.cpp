/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:02:49 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/08 16:33:48 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	a("Ema1");
	ScavTrap	b("Ema2");
	FragTrap	c("Ema3");

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	c.highFivesGuys();
	return 0;
}

