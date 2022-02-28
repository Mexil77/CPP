/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:00:29 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/28 10:46:03 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "An annoying Karen has born" << std::endl;
}

Karen::~Karen(void)
{
	std::cout << "Karen finaly has been destroyed" << std::endl;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!." << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string	options[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*arrPtr[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	size_t	i;

	i = -1;
	while (++i < 4)
		if (options[i] == level)
			return (this->*arrPtr[i])();
	std::cout << "Karen doesnt know " << level << " complain." << std::endl;
}
