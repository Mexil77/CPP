/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:06:23 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/11 16:13:33 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		void	highFivesGuys(void);

		FragTrap&	operator = (FragTrap const &frag);

		FragTrap(void);
		FragTrap(std::string Name);
		FragTrap(const FragTrap&);
		~FragTrap(void);
};

#endif
