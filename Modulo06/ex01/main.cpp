/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:42:00 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/18 18:57:40 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

struct Data
{
	uintptr_t	ptr;
};


int main(void)
{
	Data*		ptr = new Data();
	uintptr_t*	pt;
	// void*		A = new (39);
	int*		B = new int(4);

	pt = reinterpret_cast<uintptr_t *>(B);
	std::cout << "B: " << B << std::endl;
	std::cout << "*B: " << *B << std::endl;
	std::cout << "pt: " << pt << std::endl;
	std::cout << "*pt: " << *pt << std::endl;
	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "*ptr: " << ptr->ptr << std::endl;
	// delete pt;
	delete B;
	return 0;
}
