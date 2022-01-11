/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UslessBook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:03:57 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/10 18:15:52 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UslessBook.hpp"

UslessBook::UslessBook(void)
{
	size_t	i;

	i = -1;
	while (++i < 9)
	{
		Contact c;
		this->_contacts[i] = c;
	}
}

void	UslessBook::ft_addcontact(size_t pos, std::string ininame,
								std::string inilastname, std::string ininickname,
								std::string iniphone, std::string iniworstsecret)
{
	_contacts[pos].ft_inicontact(ininame, inilastname, ininickname, iniphone, iniworstsecret);
}

void	UslessBook::ft_prtintcontact(size_t pos)
{
	if (!_contacts[pos].ft_getini())
		return ;
	std::cout << "Index " << pos + 1 << std::endl;
	std::cout << "Name: " << _contacts[pos].ft_getname() << std::endl;
	std::cout << "Last name: " << _contacts[pos].ft_getlastname() << std::endl;
	std::cout << "Nick name: " << _contacts[pos].ft_getnickname() << std::endl;
	std::cout << "Phone: " << _contacts[pos].ft_getphone() << std::endl;
	std::cout << "Worst secret: " << _contacts[pos].ft_getworstsecret() << std::endl;
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
	while (_contacts[++i].ft_getini())
	{
		std::cout << "|         " << i + 1 << "|";
		std::cout << ft_formatword(_contacts[i].ft_getname()) << "|";
		std::cout << ft_formatword(_contacts[i].ft_getlastname()) << "|";
		std::cout << ft_formatword(_contacts[i].ft_getnickname()) << "|" << std::endl;
	}
	std::cout << ".----------.----------.----------.----------." << std::endl;
}

size_t	UslessBook::ft_contactexist(size_t pos)
{
	return (_contacts[pos].ft_getini());
}
