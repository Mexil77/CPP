/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UslessBook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:03:57 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/05 20:23:46 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	UslessBook::ft_addcontact(size_t pos, std::string ininame,
								std::string inilastname, std::string ininickname,
								std::string iniphone, std::string iniworstsecret)
{
	contacts[pos].ft_inicontact(ininame, inilastname, ininickname, iniphone, iniworstsecret);
}

void	UslessBook::ft_prtintcontact(size_t pos)
{
	std::cout << "Contact " << pos + 1 << std::endl;
	std::cout << "Name: " << contacts[pos].ft_getname() << std::endl;
	std::cout << "Last name: " << contacts[pos].ft_getlastname() << std::endl;
	std::cout << "Nick name: " << contacts[pos].ft_getnickname() << std::endl;
	std::cout << "Phone: " << contacts[pos].ft_getphone() << std::endl;
	std::cout << "Worst secret: " << contacts[pos].ft_getworstsecret() << std::endl;
}
