/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:32:57 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/04 12:21:23 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <cmath>
# include <iostream>

class	Fixed
{
	public:
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed&		operator = (Fixed const &fix);
		bool		operator > (Fixed const &fix) const;
		bool		operator >= (Fixed const &fix) const;
		bool		operator < (Fixed const &fix) const;
		bool		operator <= (Fixed const &fix) const;
		bool		operator == (Fixed const &fix) const;
		bool		operator != (Fixed const &fix) const;
		Fixed&		operator + (Fixed const &fix) const;
		Fixed&		operator - (Fixed const &fix) const;
		Fixed&		operator * (Fixed const &fix) const;
		Fixed&		operator / (Fixed const &fix) const;

		Fixed(void);
		Fixed(const Fixed&);
		Fixed(const int Z);
		Fixed(const float Q);
		~Fixed(void);

	private:
		static const int	_Q = 8;
		
		int	_Z;
};

std::ostream&	operator << (std::ostream &o, Fixed const &fix);

#endif
