/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:03:06 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/10 18:14:49 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->_ini = 0;
}

size_t	Contact::ft_getini(void)
{
	return (_ini);
}

std::string	Contact::ft_getname(void)
{
	return (_name);
}

std::string	Contact::ft_getlastname(void)
{
	return (_lastname);
}

std::string	Contact::ft_getnickname(void)
{
	return (_nickname);
}

std::string	Contact::ft_getphone(void)
{
	return (_phone);
}

std::string	Contact::ft_getworstsecret(void)
{
	return (_worstsecret);
}

void	Contact::ft_inicontact(std::string ininame, std::string inilastname,
								std::string ininickname, std::string iniphone,
								std::string iniworstsecret)
{
	_ini = 1;
	_name = ininame;
	_lastname = inilastname;
	_nickname = ininickname;
	_phone = iniphone;
	_worstsecret = iniworstsecret;
}
