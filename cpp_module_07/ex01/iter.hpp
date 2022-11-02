/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@students.42wolfsburg.de>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:16:07 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/30 20:35:18 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, size_t len, void(fun)(T const &))
{
	for (size_t i = 0; i < len; i++)
	{
		fun(arr[i]);
	}
}

template <typename T>
void iter(T *arr, size_t len, void(fun)(T &))
{
	for (size_t i = 0; i < len; i++)
	{
		fun(arr[i]);
	}
}

template <typename T>
void iter(T *arr, size_t len, T(fun)(T &))
{
	for (size_t i = 0; i < len; i++)
	{
		arr[i] = fun(arr[i]);
	}
}

template <typename T>
void makeHigh(T &x)
{
	x++;
}

template <typename T>
T makeHigher(T &x)
{
	return (x + 2);
}

#endif