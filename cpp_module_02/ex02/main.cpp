/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:05:56 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/22 16:20:53 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// template<size_t dp>
// constexpr int16_t DoubleToFixed(double d)
// {
// 	return int16_t(d * double(1 << dp) + (d >= 0 ? 0.5 : -0.5));
// }
// template<size_t dp>
// constexpr double FixedToDouble(int16_t d)
// {
// 	return( double(d) / double (1 << dp));
// }

// int main(void)
// {
// 	// Fixed a;
// 	// Fixed b(a);
// 	// Fixed c;
// 	// c = b;
// 	// std::cout << a.getRawBits() << std::endl;
// 	// std::cout << b.getRawBits() << std::endl;
// 	// std::cout << c.getRawBits() << std::endl;
// 	// constexpr int16_t a = DoubleToFixed<8>(42.42f);
// 	// constexpr double z = FixedToDouble<8>(a);
// 	int a = 10;
// 	int z = 1 << a;
// 	int d = 3.5 * z;
// 	std::cout << d << std::endl;
// 	return 0;
// }

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	return 0;
}