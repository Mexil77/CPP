/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:12:03 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/04 16:25:34 by emgarcia         ###   ########.fr       */
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
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed&		min(Fixed &fix1, Fixed &fix2);
		static Fixed&		max(Fixed &fix1, Fixed &fix2);
		const static Fixed&	min(const Fixed &fix1, const Fixed &fix2);
		const static Fixed&	max(const Fixed &fix1, const Fixed &fix2);

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
		Fixed&		operator ++ ();
		Fixed&		operator ++ (int);
		Fixed&		operator -- ();
		Fixed&		operator -- (int);

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
