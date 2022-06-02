/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:14:13 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/02 19:24:18 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _vInts(), _fill(0)
{
	std::cout << "A void Span has been created." << std::endl;
}

Span::Span(unsigned int N) : _vInts(std::vector<int>(N, 0)), _fill(0)
{
	std::cout << "A Span of size " << _vInts.size() << " has been created." << std::endl;
}

Span::Span(const Span& obj) : _vInts(obj._vInts), _fill(obj._fill)
{
	std::cout << "A Span of size " << _vInts.size() << " has been created as a copy." << std::endl;
}

// Span::Span(std::vector<int>::iterator b, std::vector<int>::iterator e): _vInts(std::vector<int> (b, e))
Span::Span(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
	for (std::vector<int>::iterator it = b; it != e; it++)
		std::cout << "Span.it: " << *it << std::endl;
	_vInts = std::vector<int> (b, e);
	_fill = _vInts.size();
	std::cout << "A Span of size " << _vInts.size() << " has been created as a iterator range." << std::endl;
}

Span::~Span()
{
	std::cout << "A Span of size " << _vInts.size() << " has been destroied" << std::endl;
}

Span&	Span::operator = (const Span& sp)
{
	_vInts = sp._vInts;
	_fill = sp._fill;
	std::cout << "A Span of size " << _vInts.size() << " has been created as a asignation." << std::endl;
	return (*this);
}

std::vector<int>	Span::getList(void) {return (_vInts);}
size_t	Span::getFill(void) {return (_fill);}

void	Span::addNumber(int n)
{
	if (!_vInts.empty())
	{
		size_t	i = 0;
		for (std::vector<int>::iterator it = _vInts.begin(); it != _vInts.end(); it++, i++)
		{
			if (i == this->_fill)
			{
				*it = n;
				this->_fill++;
				return ;
			}
		}
	}
	throw Span::InvalidAddException();
	
}

std::ostream&	operator << (std::ostream& o, Span &sp)
{
	if (!sp.getList().empty())
	{
		o << "Vector of size: " << sp.getList().size() << std::endl;
		int i = 0;
		for (std::vector<int>::iterator	it = sp.getList().begin(); it != sp.getList().end(); it++, i++)
			o << "vInt[ " << i << " ]: " << *it << std::endl;

	}
	else
		o << "Empty Vector." << std::endl;
	return (o);
}
