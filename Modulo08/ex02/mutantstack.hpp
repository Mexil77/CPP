/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:49:01 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/07 17:58:24 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename MutantStack<T>::container_type::iterator iterator;
		iterator	beguin(void) const;
};

template<typename T>
iterator	MutantStack<T>::beguin(void)
{
}

#endif
