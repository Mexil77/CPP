/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:29:19 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/18 13:50:06 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Unknown name") {}

Character::Character(std::string name) : _name(name) {}

Character::Character(const Character &obj)
{
	_name = obj._name;
	for (size_t i = 0; i < 4; i++)
		if (!obj._materias[i]->getType().compare("Unknown"))
			_materias[i] = obj._materias[i];
}

Character::~Character(void) {}

std::string const	&Character::getName(void) const {return (this->_name);}

void	Character::equip(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materias[i]->getType().compare("Unkown"))
		{
			this->_materias[i] = m;
			i = 4;
		}
	}
	std::cout << "Materias are full of capacity" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Idx doesnt exist." << std::endl;
		return ;
	}
	_materias[idx]->setType("Unkown");
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Idx doesnt exist." << std::endl;
		return ;
	}
	_materias[idx]->use(target);
}
