/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UslessBook.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:35:23 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/27 17:57:54 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USLESSBOOK_HPP
# define USLESSBOOK_HPP

# include <string>
# include <stdio.h>
# include <iostream>
# include <cstring>
# include <cstdlib>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class	UslessBook
{
	public:
		void	ft_addcontact(size_t pos, std::string ininame,
								std::string inilastname, std::string ininickname,
								std::string iniphone, std::string iniworstsecret);
		void	ft_prtintcontact(size_t pos);
		size_t	ft_contactexist(size_t pos);
		void	ft_printallbook(void);

		UslessBook(void);

	private:
		Contact _contacts[9];
};

#endif
