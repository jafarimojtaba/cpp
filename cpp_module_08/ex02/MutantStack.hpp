/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:11:47 by mjafari           #+#    #+#             */
/*   Updated: 2022/11/02 20:40:24 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <algorithm>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack(/* args */);
	MutantStack(const MutantStack& src);
	MutantStack& operator=(const MutantStack& src);
	~MutantStack();
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
};
#include "MutantStack.tpp"

#endif