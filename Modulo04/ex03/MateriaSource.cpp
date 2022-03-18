/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:53:45 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/18 14:07:25 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
		delete _materias[i];
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!_materias[i])
		{
			_materias[i] = materia;
			return ;
		}
	}
	std::cout << "No more space to learn a new Materia." << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++)
		if (_materias[i]->getType().compare(type))
			return (_materias[i]->clone());
	return (0);
}
