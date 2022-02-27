/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:00:26 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/27 18:00:26 by emgarcia         ###   ########.fr       */
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
