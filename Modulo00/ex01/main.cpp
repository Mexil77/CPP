/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:04:22 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/10 18:25:01 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UslessBook.hpp"

void	ft_addnewcontact(UslessBook *book, size_t i)
{
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string phone;
	std::string worstsecret;
	std::cout << "Give me the name:" << std::endl;
	std::cin >> name;
	std::cout << "Give me the last name:" << std::endl;
	std::cin >> lastname;
	std::cout << "Give me the nickname:" << std::endl;
	std::cin >> nickname;
	std::cout << "Give me the phone:" << std::endl;
	std::cin >> phone;
	std::cout << "Give me the worst secret:" << std::endl;
	std::cin >> worstsecret;
	book->ft_addcontact(i, name, lastname, nickname, phone, worstsecret);
}

int main(void)
{
	UslessBook	book;
	std::string	word;
	size_t		i;
	int			election;

	std::cout << "Welcome to your Usless Contatct Book." << std::endl;
	i = 0;
	while (word.compare("EXIT"))
	{
		std::cout << "Write one of this options :\n-ADD\n-SEARCH\n-EXIT" << std::endl;
		std::cout << "What do you want to do?:" << std::endl;
		std::cin >> word;
		if (!word.compare("ADD"))
		{
			ft_addnewcontact(&book, i);
			if (i == 7)
				i = 0;
			else
				i++;
		}
		else if (!word.compare("SEARCH"))
		{
			book.ft_printallbook();
			std::cout << "Wich user do you want to see?:" << std::endl;
			std::cin >> election;
			if (election > 0 && election < 9 && book.ft_contactexist(election - 1))
				book.ft_prtintcontact(election - 1);
			else
				std::cout << "User doesn't exist." << std::endl;
		}
		else if (word.compare("EXIT"))
			std::cout << word << ": Invalid comand." << std::endl;
		std::cout << std::endl;
	}
	return 0;
}
