/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@students.42wolfsburg.de>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:22:58 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/30 17:15:19 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<typename T>
T& min(T &a, T &b)
{
    return (b <= a ? b : a);
}

template<typename T>
T& max(T &a, T &b)
{
    return (b >=a ? b : a);
}

#endif