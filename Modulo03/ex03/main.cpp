/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:01:16 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/10 18:55:50 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	*a = new DiamondTrap("Ema");

	std::cout << *a << std::endl;
	std::cout << "a.HitP : " << a->getHitP() << std::endl;
	std::cout << "a.EnrP : " << a->getEnrP() << std::endl;
	std::cout << "a.AttD : " << a->getAttD() << std::endl;
	return 0;
}
