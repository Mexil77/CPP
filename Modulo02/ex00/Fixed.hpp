/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:14:56 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/28 19:53:14 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class	Fixed
{
	public:
		int		getRawBits(void);
		void	setRawBits(int const raw);

		Fixed(void);
		Fixed(const Fixed&);
		~Fixed(void);
	private:
		static const int	_Q = '8';
		
		int	_Z;
};

#endif
