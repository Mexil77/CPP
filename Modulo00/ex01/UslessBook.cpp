/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UslessBook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:03:57 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/06 13:56:53 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UslessBook.hpp"

void	UslessBook::ft_addcontact(size_t pos, std::string ininame,
								std::string inilastname, std::string ininickname,
								std::string iniphone, std::string iniworstsecret)
{
	contacts[pos].ft_inicontact(ininame, inilastname, ininickname, iniphone, iniworstsecret);
}

void	UslessBook::ft_prtintcontact(size_t pos)
{
	if (!contacts[pos].ft_getini())
		return ;
	std::cout << "Index " << pos + 1 << std::endl;
	std::cout << "Name: " << contacts[pos].ft_getname() << std::endl;
	std::cout << "Last name: " << contacts[pos].ft_getlastname() << std::endl;
	std::cout << "Nick name: " << contacts[pos].ft_getnickname() << std::endl;
	std::cout << "Phone: " << contacts[pos].ft_getphone() << std::endl;
	std::cout << "Worst secret: " << contacts[pos].ft_getworstsecret() << std::endl;
}

std::string	ft_formatword(std::string word)
{
	size_t		size;
	std::string	aux;

	size = word.length();
	if (size == 10)
		return (word);
	if (size > 10)
	{
		aux = word.substr(0, 9);
		aux.append(1, '.');
		return (aux);
	}
	if (size < 10)
	{
		aux.append(10 - size, ' ');
		aux.append(word);
		return (aux);
	}
	return (NULL);
}

void	UslessBook::ft_printallbook(void)
{
	size_t		i;
	std::string	aux;

	i = -1;
	std::cout << ".----------.----------.----------.----------." << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << ".----------.----------.----------.----------." << std::endl;
	while (contacts[++i].ft_getini())
	{
		std::cout << "|         " << i + 1 << "|";
		std::cout << ft_formatword(contacts[i].ft_getname()) << "|";
		std::cout << ft_formatword(contacts[i].ft_getlastname()) << "|";
		std::cout << ft_formatword(contacts[i].ft_getnickname()) << "|" << std::endl;
	}
	std::cout << ".----------.----------.----------.----------." << std::endl;
}

void	UslessBook::ft_inicontacts(void)
{
	size_t	i;

	i = -1;
	while (++i < 9)
		contacts[i].ft_setini();
}

size_t	UslessBook::ft_contactexist(size_t pos)
{
	return (contacts[pos].ft_getini());
}
