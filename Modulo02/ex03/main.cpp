/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:12:36 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/07 13:49:34 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	{
		// Pruve corners.
		Point	A;
		Point	B(1.0f, 5.0f);
		Point	C(5.0f, 1.0f);
		Point	DA = A;
		Point	DB = B;
		Point	DC = C;

		std::cout << "Pruve corners" << std::endl;
		std::cout << "A( " << A.getx() << " , " << A.gety() << " )" << std::endl;
		std::cout << "B( " << B.getx() << " , " << B.gety() << " )" << std::endl;
		std::cout << "C( " << C.getx() << " , " << C.gety() << " )" << std::endl;
		std::cout << "DA( " << DA.getx() << " , " << DA.gety() << " )" << std::endl;
		if (bsp(A, B, C, DA))
			std::cout << "Esta dentro" << std::endl;
		else
			std::cout << "Esta afuera" << std::endl;
		std::cout << "DB( " << DB.getx() << " , " << DB.gety() << " )" << std::endl;
		if (bsp(A, B, C, DB))
			std::cout << "Esta dentro" << std::endl;
		else
			std::cout << "Esta afuera" << std::endl;
		std::cout << "DC( " << DC.getx() << " , " << DC.gety() << " )" << std::endl;
		if (bsp(A, B, C, DC))
			std::cout << "Esta dentro" << std::endl;
		else
			std::cout << "Esta afuera" << std::endl;
		std::cout << std::endl;
	}
	{
		// Pruve edges.
		Point	A;
		Point	B(4.0f, 6.0f);
		Point	C(6.0f, 4.0f);
		Point	DA(2.0f, 3.0f);
		Point	DB(3.0f, 2.0f);
		Point	DC(5.0f, 5.0f);

		std::cout << "Pruve edges" << std::endl;
		std::cout << "A( " << A.getx() << " , " << A.gety() << " )" << std::endl;
		std::cout << "B( " << B.getx() << " , " << B.gety() << " )" << std::endl;
		std::cout << "C( " << C.getx() << " , " << C.gety() << " )" << std::endl;
		std::cout << "DA( " << DA.getx() << " , " << DA.gety() << " )" << std::endl;
		if (bsp(A, B, C, DA))
			std::cout << "Esta dentro" << std::endl;
		else
			std::cout << "Esta afuera" << std::endl;
		std::cout << "DB( " << DB.getx() << " , " << DB.gety() << " )" << std::endl;
		if (bsp(A, B, C, DB))
			std::cout << "Esta dentro" << std::endl;
		else
			std::cout << "Esta afuera" << std::endl;
		std::cout << "DC( " << DC.getx() << " , " << DC.gety() << " )" << std::endl;
		if (bsp(A, B, C, DC))
			std::cout << "Esta dentro" << std::endl;
		else
			std::cout << "Esta afuera" << std::endl;
		std::cout << std::endl;
	}
	{
		// Pruve divide by 0.
		Point	A(1.0f, 1.0f);
		Point	B(1.0f, 4.0f);
		Point	C(4.0f, 1.0f);
		Point	DA(2.0f, 2.0f);
		Point	DB(1.0f, 3.0f);
		Point	DC(2.0f, 1.0f);

		std::cout << "Pruve special cases" << std::endl;
		std::cout << "A( " << A.getx() << " , " << A.gety() << " )" << std::endl;
		std::cout << "B( " << B.getx() << " , " << B.gety() << " )" << std::endl;
		std::cout << "C( " << C.getx() << " , " << C.gety() << " )" << std::endl;
		std::cout << "DA( " << DA.getx() << " , " << DA.gety() << " )" << std::endl;
		if (bsp(A, B, C, DA))
			std::cout << "Esta dentro" << std::endl;
		else
			std::cout << "Esta afuera" << std::endl;
		std::cout << "DB( " << DB.getx() << " , " << DB.gety() << " )" << std::endl;
		if (bsp(A, B, C, DB))
			std::cout << "Esta dentro" << std::endl;
		else
			std::cout << "Esta afuera" << std::endl;
		std::cout << "DC( " << DC.getx() << " , " << DC.gety() << " )" << std::endl;
		if (bsp(A, B, C, DC))
			std::cout << "Esta dentro" << std::endl;
		else
			std::cout << "Esta afuera" << std::endl;
		std::cout << std::endl;
	}
	{
		// Good cases.
		Point	A(3.8f, 10.15f);
		Point	B(0.25f, 6.32f);
		Point	C(4.0f, 1.0f);
		Point	DA(2.63f, 5.75f);

		std::cout << "Good cases" << std::endl;
		std::cout << "A( " << A.getx() << " , " << A.gety() << " )" << std::endl;
		std::cout << "B( " << B.getx() << " , " << B.gety() << " )" << std::endl;
		std::cout << "C( " << C.getx() << " , " << C.gety() << " )" << std::endl;
		std::cout << "DA( " << DA.getx() << " , " << DA.gety() << " )" << std::endl;
		if (bsp(A, B, C, DA))
			std::cout << "Esta dentro" << std::endl;
		else
			std::cout << "Esta afuera" << std::endl;
		std::cout << std::endl;
	}
	return 0;
}
