/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:42:00 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/23 14:55:32 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	uintptr_t number;
	Data *ptr = new Data();
	Data *other = new Data();

	ptr->num = 6;
	std::cout << "other: " << other << std::endl;
	std::cout << "other->num: " << other->num << std::endl;
	number = serialize(ptr);
	other = deserialize(number);
	std::cout << "number: " << number << std::endl;
	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "ptr->num: " << ptr->num << std::endl;
	std::cout << "other: " << other << std::endl;
	std::cout << "other->num: " << other->num << std::endl;
	delete ptr;
	system("leaks Serialize");
	return 0;
}
