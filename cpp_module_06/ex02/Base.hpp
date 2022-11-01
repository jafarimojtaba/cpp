/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:03:05 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/28 19:30:29 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
class Base
{
public:
	virtual ~Base(){};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
#endif