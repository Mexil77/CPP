/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexil <mexil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:37:10 by mexil             #+#    #+#             */
/*   Updated: 2022/02/24 21:32:33 by mexil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class	Weapon
{
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		void		setType(std::string type);
		std::string	getType(void);
	private:
		std::string	type;
};

#endif
