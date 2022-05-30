/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:58:47 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/30 18:49:07 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>

template<typename T>
class Array
{
	public:
		Array(void);
		Array(const Array &obj);
		Array(unsigned int n);
		~Array();

		Array&	operator = (const Array &arr);
		T&		operator[](int);
		
		size_t	getSize(void);
		T*		getArr(void);
		T		getArrData(size_t i);
		void	setSize(size_t);

		class InvalidIndexException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Invalid index");
				}
		};

	private:
		size_t	_size;
		T		*_arr;
};

template<typename T>
Array<T>::Array(void) : _size(0), _arr(new T[0])
{
	std::cout << "An Array has been created with empty constructor." << std::endl;
}

template<typename T>
Array<T>::Array(const Array &obj) : _size(obj._size), _arr(new T[obj._size])
{
	std::cout << "An Array has been created with " << _size << " elemnts as a copy." << std::endl;
	for (size_t i = 0; i < _size; i++)
		_arr[i] = obj._arr[i];
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(static_cast<size_t>(n)), _arr(new T[n])
{
	std::cout << "An Array has been created with " << n << " elemnts." << std::endl;
	for (size_t i = 0; i < _size; i++)
		_arr[i] = 0;
}

template<typename T>
Array<T>::~Array(void)
{
	std::cout << "An Array has been Destroied." << std::endl;
	delete [] _arr;
}

template<typename T>
Array<T>&	Array<T>::operator = (Array const &arr)
{
	if (this != &arr )
	{
		delete [] _arr;
		_size = arr._size;
		_arr = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_arr[i] = arr._arr[i];
		std::cout << "An Array has been created with " << _size << " elemnts as a asignation." << 	std::endl;
	}
	return (*this);
}

template<typename T>
T&	Array<T>::operator[] (int i)
{
	if (i >= static_cast<int>(_size) || i < 0)
		throw Array<T>::InvalidIndexException();
	return (_arr[i]);
}

template<typename T>
size_t	Array<T>::getSize(void)
{
	return (_size);
}

template<typename T>
T*	Array<T>::getArr(void)
{
	return (this->_arr);
}

template<typename T>
T	Array<T>::getArrData(size_t i)
{
	return (_arr[i]);
}

template<typename T>
void	Array<T>::setSize(size_t i)
{
	this->_size = i;
}

template<typename T>
std::ostream&	operator << (std::ostream &o, Array<T> &arr)
{
	o << "Array of size: " << arr.getSize() << std::endl;
	for (size_t i = 0; i < arr.getSize(); i++)
		o << "Arr[ " << i << " ]: " << arr.getArrData(i) << std::endl;
	return (o);
}

#endif