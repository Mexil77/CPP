/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:55:36 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/16 16:39:57 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	this->dogBrain = new Brain();
	std::cout << "A dog has been created with default constructor." << std::endl;
}

Dog::Dog(const Dog &obj)
{
	this->_type = obj._type;
	this->dogBrain = obj.dogBrain;
	std::cout << "A dog has been created with copy constructor." << std::endl;
}

Dog::~Dog()
{
	delete this->dogBrain;
	std::cout << "A dog has been destroyed." << std::endl;
}

Dog&	Dog::operator=(const Dog &dog)
{
	this->_type = dog._type;
	this->dogBrain = dog.dogBrain;
	return (*this);
}

void	Dog::makeSound(void)
{
	std::cout << "The dog make woffff!!!!" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "The dog make woffff!!!!" << std::endl;
}

void	Dog::showIdeas(void)
{
	size_t	i;

	i = -1;
	while (++i < 100)
		std::cout << this->dogBrain->getIdea(i) << std::endl;
}

void	Dog::showIdeas(void) const
{
	size_t	i;

	i = -1;
	while (++i < 100)
		std::cout << this->dogBrain->getIdea(i) << std::endl;
}
