/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:49:01 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/09 11:35:42 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <string>
# include <iostream>
# include <stack>
# include <deque>


template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack() : std::stack<T>(){};
		MutantStack( const MutantStack<T> & other ) : std::stack<T>(other) {};
		virtual	~MutantStack(){};

		MutantStack & operator=( const MutantStack<T> & other )
		{
			if ( *this == &other)
				return *this;
			std::stack<T>::operator=(other);
			return *this;
		}

	iterator	begin()
	{
		return this->c.begin();
	};

	iterator	end()
	{
		return this->c.end();
	};
	
	const_iterator	begin()	const
	{
		return this->c.begin();
	};

	const_iterator	end()	const
	{
		return this->c.end();
	};

	reverse_iterator	rbegin()
	{
		return this->c.rbegin();
	};
	
	reverse_iterator	rend()
	{
		return this->c.rend();
	};

	const_reverse_iterator	rbegin()	const
	{
		return this->c.rbegin();
	};
	
	const_reverse_iterator	rend()		const
	{
		return this->c.rend();
	};
};

#endif
