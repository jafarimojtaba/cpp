/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@students.42wolfsburg.de>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:57:44 by mjafari           #+#    #+#             */
/*   Updated: 2022/11/02 06:37:45 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string.h>


template <typename T>
int Array<T>::my_num = 0;

template <typename T>
Array<T>::Array() : _array(nullptr), _size(0)
{
	this->_array = new T[0];
	std::cout << "Array Default constructor called\n";
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(nullptr), _size(n)
{
	this->_array = new T[n];
	srand(time(NULL));
    const int value = rand() + Array<T>::my_num;
	Array<T>::my_num++;
	memset(_array, value, sizeof(T) * n);
	std::cout << "Array constructor with size = " << this->size() << " called\n";
}

template <typename T>
Array<T>::Array(const Array &src) : _array(nullptr), _size(src.size())
{
	std::cout << "Array copy operator called\n";
	if (src._size > 0)
	{
		this->_array = new T[src._size];
		for (unsigned int i = 0; i < src._size; i++)
			this->_array[i] = src._array[i];
	}
	this->_size = src._size;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &src)
{
	std::cout << "Array assignment operator called\n";
	if (this->_array)
		delete[] this->_array;
	this->_array = nullptr;
	if (src._size > 0)
	{
		this->_array = new T[src._size];
		for (unsigned int i = 0; i < src._size; i++)
			this->_array[i] = src._array[i];
	}
	this->_size = src._size;
	return(*this);
}

template<typename T>
Array<T>::~Array()
{
	if (this->_array)
		delete[] this->_array;
	std::cout << "destructor is called\n";
}

template<typename T>
T& Array<T>::operator[](const unsigned int i)
{
	if (i >= this->_size || i < 0)
		throw Array::OutOfBound();
	else
		return (this->_array[i]);
}

template<typename T>
T const & Array<T>::operator[](unsigned int i) const {
	if (i >= this->_size || i < 0)
		throw Array::OutOfBound();
	return (this->_array[i]);
}

template<typename T>
unsigned int 	Array<T>::size() const{
	return this->_size;
}


template<typename T>
const char *	Array<T>::OutOfBound::what() const throw() {
	return ("Exception:: i >= size");
}
