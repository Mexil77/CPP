/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:29:19 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/18 14:14:30 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Unknown name")
{
	for (size_t i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (size_t i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::Character(const Character &obj)
{
	_name = obj._name;
	for (size_t i = 0; i < 4; i++)
		_materias[i] = obj._materias[i];
}

Character::~Character(void)
{
	for (size_t i = 0; i < 4; i++)
		delete _materias[i];
}

std::string const	&Character::getName(void) const {return (this->_name);}

void	Character::equip(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = m;
			return ;
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
	_materias[idx] = NULL;
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
