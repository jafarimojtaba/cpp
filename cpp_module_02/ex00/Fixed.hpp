/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:29 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/21 17:07:01 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>

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
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
#endif // FIXED_HPP