/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 23:14:21 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/25 18:26:55 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point(/* args */);
	Point(const float x, const float y);
	Point(Point const &src);
	Point& operator=(Fixed const &src);
	~Point();
	float get_x(void) const;
	float get_y(void) const;
};

#endif // POINT_HPP
std::ostream & operator<<(std::ostream &src, Point const &p);
bool bsp( Point const a, Point const b, Point const c, Point const point);