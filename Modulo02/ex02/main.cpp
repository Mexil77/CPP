/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:34:06 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/04 16:04:26 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	{
		Fixed const a (15.5f);
		Fixed const b (10.25f);
		Fixed c = a + b;
		Fixed d = a - b;
		Fixed e = a * b;
		Fixed f = a / b;
		Fixed g = e;
		Fixed h = f;

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
		std::cout << "A : " << a << std::endl;
		std::cout << "B : " << b << std::endl;
		std::cout << "C : " << c << std::endl;
		std::cout << "D : " << d << std::endl;
		std::cout << "E : " << e << std::endl;
		std::cout << "F : " << f << std::endl;
		c++;
		++d;
		std::cout << "C : " << c << std::endl;
		std::cout << "D : " << d << std::endl;
		if (g == ++e)
			std::cout << "G es igual que E" << std::endl;
		else
			std::cout << "G es distinto que E" << std::endl;
		std::cout << "E : " << e << std::endl;
		if (h == f)
			std::cout << "H es igual que F" << std::endl;
		else
			std::cout << "H es distinto que F" << std::endl;
		std::cout << "F : " << f << std::endl;
		std::cout << "A : " << a << std::endl;
		std::cout << "B : " << b << std::endl;
		std::cout << "C : " << c << std::endl;
		std::cout << "D : " << d << std::endl;
		std::cout << "min de A y B es: " << Fixed::min( a, b ) << std::endl;
		std::cout << "min de C y D es: " << Fixed::min( c, d ) << std::endl;
		std::cout << "min de A y C es: " << Fixed::min( a, c ) << std::endl;
		std::cout << "min de B y D es: " << Fixed::min( b, d ) << std::endl;
		std::cout << "max de A y B es: " << Fixed::max( a, b ) << std::endl;
		std::cout << "max de C y D es: " << Fixed::max( c, d ) << std::endl;
		std::cout << "max de A y C es: " << Fixed::max( a, c ) << std::endl;
		std::cout << "max de B y D es: " << Fixed::max( b, d ) << std::endl;
		std::cout << std::endl << "*-----------------------------------------------*" << std::endl << std::endl;
	}
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	return 0;
}