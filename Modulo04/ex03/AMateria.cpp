/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:59:32 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/17 16:36:37 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Unkown") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::~AMateria(void) {}

AMateria    &AMateria::operator = (const AMateria &materia)
{
    this->_type = materia._type;
    return (*this);
}

std::string const	&AMateria::getType(void) const {return (_type);}

void	AMateria::setType(std::string type) {_type = type;}

AMateria	*AMateria::clone(void) const {}

void	AMateria::use(ICharacter &target) {}
