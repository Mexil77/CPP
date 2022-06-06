/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:49:01 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/06 19:26:38 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <iostream>
# include <stack>

template <typename T>
class MutantStack
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack &obj);
		~MutantStack();

		MutantStack<T>&	operator = (MutantStack &mut);

		std::stack<T>&	getStack(void);
		size_t			size(void);
		void			push(T n);
		T&				top(void);
		void			pop(void);
		bool			empty(void);

		class iterator
		{
			public:
				iterator(void);
				~iterator();
			private:
				T	*_it;
				std::stack<T>	_itStack;
		};

		class EmptyException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Empty MutantStack.");
				}
		};
	private:
		std::stack<T>	_stack;
};

// MutatnSack::Iterator

template<typename T>
MutantStack<T>::iterator::iterator(void): _it(new T(0)), _itStack(new std::stack)
{
	std::cout << "A MutantSack Iterator has been created." << std::endl;
}

// MutantStack

template<typename T>
MutantStack<T>::MutantStack(void)
{
	std::cout << "A MutantSack has been created." << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &obj)
{
	if (!obj._stack.empty())
	{
		std::stack<T>	tmp = obj._stack;
		while (!tmp.empty())
		{
			_stack.push(tmp.top());
			tmp.pop();
		}
	}
	std::cout << "A MutantSack has been created as a copy." << std::endl;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "A MutantSack has been deleted." << std::endl;
}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator = (MutantStack &mut)
{
	if (!mut._stack.empty())
	{
		std::stack<T>	tmp = mut._stack;
		while (!tmp.empty())
		{
			_stack.push(tmp.top());
			tmp.pop();
		}
	}
	std::cout << "A MutantSack has been created as an asignation." << std::endl;
	return (*this);
}

template<typename T>
std::stack<T>&	MutantStack<T>::getStack(void) {return (_stack);}

template<typename T>
size_t	MutantStack<T>::size(void) {return (_stack.size());}

template<typename T>
void	MutantStack<T>::push(T n){_stack.push(n);}

template<typename T>
T&	MutantStack<T>::top(void)
{
	if (_stack.empty())
		throw MutantStack<T>::EmptyException();
	return (_stack.top());
}

template<typename T>
void	MutantStack<T>::pop(void)
{
	if (_stack.empty())
		throw MutantStack<T>::EmptyException();
	_stack.pop();
}

template<typename T>
bool	MutantStack<T>::empty() {return (_stack.empty());}

template<typename T>
std::ostream&	operator << (std::ostream &o, MutantStack<T> &mut)
{
	if (mut.empty())
		o << "Empty MutantStack" << std::endl;
	std::stack<T>	tmp = mut.getStack();
	while (!tmp.empty())
	{
		o << "stack [ " << tmp.top() << " ]" << std::endl;
		tmp.pop();
	}
	return (o);
}

#endif