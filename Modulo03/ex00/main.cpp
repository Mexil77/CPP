/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:35:29 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/08 12:24:15 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a ("Lalo");
	ClapTrap b ("Ema");

	a.attack("Manolo");
	b.attack("miguel");
	a.beRepaired(UINT_MAX - 20);
	a.beRepaired(20);
	a.beRepaired(10);
	b.takeDamage(3);
	b.takeDamage(10);
	b.takeDamage(5);
    return 0;
}
