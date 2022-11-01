/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:11:36 by mjafari           #+#    #+#             */
/*   Updated: 2022/11/01 19:45:50 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	unsigned int _size;
	T *_array;

public:
	static int my_num;
		Array();
	Array(unsigned int n);
	Array(const Array &src);
	Array &operator=(const Array &src);
	~Array();
	unsigned int size(void) const;
	T &operator[](unsigned int i);
	T const &operator[](unsigned int i) const;

	class OutOfBound : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

#include "Array.tpp"

#endif