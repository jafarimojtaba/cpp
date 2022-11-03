/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:23:11 by mjafari           #+#    #+#             */
/*   Updated: 2022/11/02 20:41:12 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "default constructor\n";
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "default destructor\n";
}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src) {
    std::cout << "Copy constructor\n";
    *this = src;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &src) {
    std::cout << "Copy assignment operator\n";
    if (this != &src) 
		std::stack<T>::operator=(src);
    return *this;
}