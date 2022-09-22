/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:29 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/22 16:21:03 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int number;
	static const int fractional_bit;

public:
	Fixed(/* args */);
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &src);
	~Fixed();
	Fixed(const int n);
	Fixed(const float n);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};
std::ostream& operator<<(std::ostream &stream, Fixed const &ref);

#endif // FIXED_HPP
// 0000 1000