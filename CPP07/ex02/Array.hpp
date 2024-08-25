/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:56:09 by mimoreir          #+#    #+#             */
/*   Updated: 2024/08/25 14:59:25 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

template<typename T>
class Array
{
	protected:
		T *_arr;
		unsigned int	_size;	
	public:
		Array();
		Array(unsigned int i);
		Array(Array<T> const&);
		Array<T>&		operator=(Array<T> const& other);
		T&				operator[](unsigned int i);
		void			display(std::ostream& stream) const;
		unsigned int	size() const;
		~Array();
};

template <class T>
Array<T>::Array()
{
	_arr = new T[0];
	_size = 0;
}

template <class T>
Array<T>::~Array()
{
	delete[] _arr;
}

template <class T>
Array<T>::Array(unsigned int i)
{
	T *aux;
	_arr = new T[i];
	_size = i;
	
	aux = _arr;
	for (unsigned int i = 0; i < _size; i++)
	{
		*aux = i;
		aux++;
	}
}
template <class T>
Array<T>::Array(Array<T> const& other)
{
	_arr = NULL;
	operator=(other);	
}

template <class T>
Array<T>&	Array<T>::operator=(Array<T> const& other)
{
	if (_arr != NULL)
		delete[] _arr;
	_size = other._size;
	_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = other._arr[i];
	return (*this);
}

template <class T>
T&			Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw std::exception();
	return _arr[i];
}

template <class T>
void		Array<T>::display(std::ostream& stream) const
{
	unsigned int i;
	if (_size == 0)
		return;
	for (i = 0; i < _size - 1; i++)
		stream << _arr[i] << " - ";
	if (i == _size - 1)
		stream << _arr[i];
}

template <class T>
std::ostream&	operator<<(std::ostream& stream, Array<T>const& cl)
{
	cl.display(stream);
	return (stream);
}

template <class T>
unsigned int	Array<T>::size() const
{
	return _size;
}
