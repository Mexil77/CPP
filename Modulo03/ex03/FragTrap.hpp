/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:00:57 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/11 13:16:34 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		void	highFivesGuys(void);

		FragTrap&	operator = (FragTrap const &frag);

		FragTrap(void);
		FragTrap(std::string Name);
		FragTrap(const FragTrap&);
		virtual	~FragTrap(void);
};

#endif
