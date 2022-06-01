/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:14:25 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/01 20:12:31 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <vector>
# include <algorithm>

// template<typename T>
class Span
{
	public:
		Span(void);
		Span(unsigned int N);
		// Span(const Span& obj);
		~Span();

		// Span& operator = (const Span& sp);

		std::vector<int>	getList(void);
	private:
		std::vector<int>	_vInts;

};

#endif
