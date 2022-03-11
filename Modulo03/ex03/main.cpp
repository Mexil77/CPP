/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:01:16 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/11 14:31:21 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	a("Ema");

	std::cout << a << std::endl;
	a.whoAmI();
	a.attack("miguel");
	a.ClapTrap::attack("miguel");
	a.takeDamage(10);
	a.beRepaired(20);
	a.guardGate();
	std::cout << a << std::endl;
	return 0;
}
