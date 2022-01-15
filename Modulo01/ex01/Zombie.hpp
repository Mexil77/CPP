/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:33:53 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/13 18:24:11 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
	public:
		void	announce(void);
		void	setname(std::string name);

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
	
	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif