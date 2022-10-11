/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 23:14:12 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/25 18:27:53 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(/* args */): _x(0), _y(0)
{
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
}

Point &Point::operator=(Point const &src)
{
	src.~Point();
	return (*this);
}

Point::Point(Point const &src): _x(src._x), _y(src._y){
}

Point::~Point()
{
}

float Point::get_x(void) const{
	return (this->_x.toFloat());
}

float Point::get_y(void) const{
	return (this->_y.toFloat());
}

std::ostream & operator<<(std::ostream &src, Point const & p)
{
	src << "(" << p.get_x() << "," << p.get_y() << ")";
	return (src);
}