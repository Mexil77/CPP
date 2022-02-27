/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:01:09 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/27 18:01:10 by emgarcia         ###   ########.fr       */
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
