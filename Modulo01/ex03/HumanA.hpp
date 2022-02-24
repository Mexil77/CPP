/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexil <mexil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:30:52 by mexil             #+#    #+#             */
/*   Updated: 2022/02/24 22:39:02 by mexil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(void);
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);
	private:
		std::string	name;
		Weapon		*weapon;
};

#endif
