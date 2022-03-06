/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:12:36 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/06 18:35:59 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point   A;
	Point   B(1.0f, 5.0f);
	Point   C(5.0f, 1.0f);
	Point   D(1.5f, 3.0f);

	std::cout << "A( " << A.getx() << " , " << A.gety() << " )" << std::endl;
	std::cout << "B( " << B.getx() << " , " << B.gety() << " )" << std::endl;
	std::cout << "C( " << C.getx() << " , " << C.gety() << " )" << std::endl;
	std::cout << "D( " << D.getx() << " , " << D.gety() << " )" << std::endl;
	if (bsp(A, B, C, D))
		std::cout << "Esta dentro" << std::endl;
	else
		std::cout << "Esta afuera" << std::endl;
	return 0;
}
