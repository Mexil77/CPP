/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:14:25 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/03 19:08:43 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>

class Span
{
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span& obj);
		Span(std::vector<int>::iterator b, std::vector<int>::iterator e);
		~Span();

		Span& operator = (const Span& sp);

		std::vector<int>&	getList(void);
		size_t				getFill(void);
		void				addNumber(int n);
		void				addNumber(std::vector<int>::iterator b, std::vector<int>::iterator e);
		int					shortestSpan(void);
		int					longestSpan(void);

		class InvalidAddException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Not Position enof");
				}
		};
	private:
		std::vector<int>	_vInts;
		size_t				_fill;

};

std::ostream&	operator << (std::ostream& o, Span &sp);

#endif
