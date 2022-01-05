/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:04:22 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/05 20:24:44 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_addnewcontact(UslessBook *book, size_t *i)
{
	/* std::string parameter;
	std::cout << "Give me the first name:" << std::endl;
	std::cin >> parameter; */
	book->ft_addcontact(*i, "Miguel", "Angel", "Elmigue", "66059394", "No sabe git");
}

int main(void)
{
	UslessBook	book;
	std::string	word;
	size_t		i;

	std::cout << "Welcome to your Usless Contatct Book." << std::endl;
	i = 0;
	while (word.compare("EXIT"))
	{
		std::cout << "Write one of this options :\n-ADD\n-SEARCH\n-EXIT" << std::endl;
		std::cout << "What do you whant to do?:" << std::endl;
		std::cin >> word;
		if (!word.compare("ADD"))
		{
			ft_addnewcontact(&book, &i);
			book.ft_prtintcontact(i);
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
