/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:03:06 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/06 13:36:45 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::ft_setini(void)
{
	ini = 0;
}

size_t	Contact::ft_getini(void)
{
	return (ini);
}

std::string	Contact::ft_getname(void)
{
	return (name);
}

std::string	Contact::ft_getlastname(void)
{
	return (lastname);
}

std::string	Contact::ft_getnickname(void)
{
	return (nickname);
}

std::string	Contact::ft_getphone(void)
{
	return (phone);
}

std::string	Contact::ft_getworstsecret(void)
{
	return (worstsecret);
}

void	Contact::ft_inicontact(std::string ininame, std::string inilastname,
								std::string ininickname, std::string iniphone,
								std::string iniworstsecret)
{
	ini = 1;
	name = ininame;
	lastname = inilastname;
	nickname = ininickname;
	phone = iniphone;
	worstsecret = iniworstsecret;
}
