/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UslessBook.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:35:23 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/06 13:56:06 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USLESSBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class	UslessBook
{
	private:
		Contact contacts[9];

	public:
		void	ft_inicontacts(void);
		void	ft_addcontact(size_t pos, std::string ininame,
								std::string inilastname, std::string ininickname,
								std::string iniphone, std::string iniworstsecret);
		void	ft_prtintcontact(size_t pos);
		size_t	ft_contactexist(size_t pos);
		void	ft_printallbook(void);
};

#endif
