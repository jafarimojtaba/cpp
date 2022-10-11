/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:10:41 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/26 11:01:16 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	float v1, v2;
    Fixed w1, w2, tmp1, tmp2;
    v1 = a.get_x()*(c.get_y() - a.get_y()) + (p.get_y() - a.get_y()) * (c.get_x() - a.get_x()) - p.get_x() * (c.get_y() - a.get_y());
    v2 = (b.get_y() - a.get_y()) * (c.get_x() - a.get_x()) - (b.get_x() - a.get_x()) * (c.get_y() - a.get_y());
    tmp1 = Fixed(v1);
    tmp2 = Fixed(v2);
    w1 = tmp1 / tmp2;

    v1 = p.get_y() - a.get_y() - w1.toFloat() * (b.get_y() - a.get_y());
    v2 = c.get_y() - a.get_y();
    tmp1 = Fixed(v1);
    tmp2 = Fixed(v2);
    w2 = tmp1 / tmp2;

    if (w1 >0 && w2>0 && (w1+w2) < 1)
    {
		std::cout << "Point is inside the triangle!" << std::endl;
        return true;
    }
    else
	{
		if (w1 >= 0 && w2 >= 0 && (w1 + w2) <= 1)
			std::cout << "Point is on the line" << std::endl;
		else
			std::cout  << "Point is outside of the triangle!" << std::endl;
		return false;
	}
}
