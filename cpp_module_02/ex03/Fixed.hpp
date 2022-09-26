/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:29 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/24 15:09:26 by mjafari          ###   ########.fr       */
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
	~Fixed();
	Fixed(const int n);
	Fixed(const float n);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt( void ) const;
	float toFloat( void ) const;

	Fixed &operator=(Fixed const &src);
	
	bool operator<(Fixed const &src) const;
	bool operator>(Fixed const &src) const;
	bool operator<=(Fixed const &src) const;
	bool operator>=(Fixed const &src) const;
	bool operator==(Fixed const &src) const;
	bool operator!=(Fixed const &src) const;

	Fixed operator+(Fixed const &src) const;
	Fixed operator-(Fixed const &src) const;
	Fixed operator*(Fixed const &src) const;
	Fixed operator/(Fixed const &src) const;

	Fixed &operator++(void);
	Fixed &operator--(void);

	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed& min(Fixed &a, Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);

	static const Fixed& min(Fixed const &a, const Fixed &b);
	static const Fixed& max(Fixed const &a, const Fixed &b);
	

};
std::ostream& operator<<(std::ostream &stream, Fixed const &ref);

#endif // FIXED_HPP
// 0000 1000