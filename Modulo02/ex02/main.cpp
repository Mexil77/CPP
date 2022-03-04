/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:34:06 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/04 11:12:49 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed const a (15.25f);
	Fixed const b (15.25f);

	if (a > b)
		std::cout << "A (" << a << ") es mayor que B (" << b << ")" << std::endl;
	else
		std::cout << "B (" << b << ") es mayor o igual que A (" << a << ")" << std::endl;
	if (a < b)
		std::cout << "A (" << a << ") es menor que B (" << b << ")" << std::endl;
	else
		std::cout << "B (" << b << ") es menor o igual que A (" << a << ")" << std::endl;
	if (a >= b)
		std::cout << "A (" << a << ") es mayor o igual que B (" << b << ")" << std::endl;
	else
		std::cout << "B (" << b << ") es mayor." << std::endl;
	if (a <= b)
		std::cout << "A (" << a << ") es menor o igual que B (" << b << ")" << std::endl;
	else
		std::cout << "B (" << b << ") es menor." << std::endl;
	if (a == b)
		std::cout << "A (" << a << ") es igual que B (" << b << ")" << std::endl;
	else
		std::cout << "A (" << a << ") y B (" << b << ") son distintos" << std::endl;
	if (a != b)
		std::cout << "A (" << a << ") y B (" << b << ") son distintos" << std::endl;
	else
		std::cout << "A (" << a << ") es igual que B (" << b << ")" << std::endl;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}