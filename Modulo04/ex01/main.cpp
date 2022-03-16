/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:55:13 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/16 12:52:54 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	{
		const Animal* i = new Cat();
		const Animal* j = new Dog();
		i->showIdeas();
		j->showIdeas();
		delete i;
		delete j;
		system("leaks brain");
	}
    return 0;
}
