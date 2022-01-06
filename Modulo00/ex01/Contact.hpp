/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:33:02 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/06 13:37:07 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

#include <string>
#include <iostream>

class	Contact
{
	private:
		size_t		ini;
		std::string name;
		std::string lastname;
		std::string nickname;
		std::string phone;
		std::string worstsecret;

	public:
		void		ft_inicontact(std::string ininame, std::string inilastname,
								std::string ininickname, std::string iniphone,
								std::string iniworstsecret);
		void		ft_setini(void);
		size_t		ft_getini(void);
		std::string	ft_getname(void);
		std::string	ft_getlastname(void);
		std::string	ft_getnickname(void);
		std::string	ft_getphone(void);
		std::string	ft_getworstsecret(void);
};

#endif