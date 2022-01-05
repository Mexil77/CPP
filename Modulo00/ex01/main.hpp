/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:47:32 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/05 20:23:54 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP

#include <iostream>
#include <string>

class	Contact
{
	private:
		std::string name;
		std::string lastname;
		std::string nickname;
		std::string phone;
		std::string worstsecret;

	public:
		void		ft_inicontact(std::string ininame, std::string inilastname,
								std::string ininickname, std::string iniphone,
								std::string iniworstsecret);
		std::string	ft_getname(void);
		std::string	ft_getlastname(void);
		std::string	ft_getnickname(void);
		std::string	ft_getphone(void);
		std::string	ft_getworstsecret(void);
};

class	UslessBook
{
	private:
		Contact contacts[8];

	public:
		void		ft_addcontact(size_t pos, std::string ininame,
								std::string inilastname, std::string ininickname,
								std::string iniphone, std::string iniworstsecret);
		void		ft_prtintcontact(size_t pos);
};

#endif