/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:33:02 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/10 18:14:05 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

#include <string>
#include <iostream>

class	Contact
{
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

		Contact(void);

	private:
		size_t		_ini;
		std::string _name;
		std::string _lastname;
		std::string _nickname;
		std::string _phone;
		std::string _worstsecret;
};

#endif