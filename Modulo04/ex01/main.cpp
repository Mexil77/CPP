/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:55:13 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/09 16:33:53 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	{
		const Animal*	i = new Cat();
		const Animal*	j = new Dog();
		const Cat*		a = new Cat();
		const Cat*		b = new Cat(*a);
		const Dog*		c = new Dog();
		const Dog*		d = new Dog(*c);
		std::cout << std::endl;
		// i->showIdeas();
		// j->showIdeas();
		delete i;
		delete j;
		delete a;
		delete b;
		delete c;
		delete d;
		system("leaks brain");
	}
	{
		size_t	i;
		Animal	*animals[100];

		i = -1;
		while (++i < 100)
		{
			if (i < 50)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		animals[35]->makeSound();
		animals[75]->makeSound();
		i = -1;
		while (++i < 100)
			delete animals[i];
		system("leaks brain");
	}
    return 0;
}
