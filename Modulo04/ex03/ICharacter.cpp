/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:58:30 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/17 17:35:07 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::~ICharacter(void) {}

std::string const	&ICharacter::getName(void) const {}

void	ICharacter::equip(AMateria *m) {}

void	ICharacter::unequip(int idx) {}

void	ICharacter::use(int idx, ICharacter &target) {}
