/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:58:06 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/17 18:23:59 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource	*src;
	ICharacter		*me;
	ICharacter		*bob;
	AMateria		*tmp;
	
	src = new MateriaSource();
	me = new Character("me");
	bob = new Character("bob");

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}
