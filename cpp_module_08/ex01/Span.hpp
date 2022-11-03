/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:52:21 by mjafari           #+#    #+#             */
/*   Updated: 2022/11/02 19:45:36 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <iterator>

class Span
{
private:
	unsigned int _limit;
	std::vector<int> _vect;
public:
	Span();
	Span(unsigned int N);
	Span(const Span& src);
	Span& operator=(const Span& src);
	~Span();

	void addNumber(int n);
	void addMany(int n);
	int shortestSpan(void) const;
	int longestSpan(void) const;
	void	printVector() const;
	unsigned int getN(void) const;

	class OutOfMemory: public std::exception{
		public:
			const char* what() const throw();
	};
	class OutOfBound: public std::exception{
		public:
			const char* what() const throw();
	};
	class NoSpan: public std::exception{
		public:
			const char* what() const throw();
	};
};

	
#endif