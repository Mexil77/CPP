/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:14:13 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/01 20:19:38 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _vInts()
{
	std::cout << "A void Span has been created." << std::endl;
}

Span::Span(unsigned int N) : _vInts(std::vector<int>(N, 0))
{
	std::cout << "A Span of size " << _vInts.size() << " has been created." << std::endl;
}

// template<typename T>
// Span<T>::Span(const Span& obj)
// {
// }

Span::~Span()
{
	std::cout << "A Span of size " << _vInts.size() << " has been destroied" << std::endl;
}

std::vector<int>	Span::getList(void) {return (_vInts);}
