/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:52:31 by mjafari           #+#    #+#             */
/*   Updated: 2022/11/02 19:56:46 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _limit(0) {}

Span::Span(unsigned int N)
{
	try
	{
		if (this->_vect.max_size() >= N)
			this->_limit = N;
		else
			throw Span::OutOfMemory();
	}
	catch (Span::OutOfMemory &e)
	{
		std::cout << e.what() << '\n';
	}
}

Span::Span(const Span &src)
{
	*this = src;
}

Span &Span::operator=(const Span &src)
{
	if (!this->_vect.empty())
		this->_vect.clear();
	this->_limit = src._limit;
	for (size_t i = 0; i < this->_limit; i++)
		this->_vect.push_back(src._vect[i]);
	return (*this);
}
void Span::printVector() const
{
	std::vector<int>::const_iterator it;
	std::cout << "	VECTOR >> ";
	for (it = this->_vect.begin(); it != this->_vect.end(); ++it)
		std::cout << *it << " ";
	std::cout << " [SIZE: " << this->_vect.size() << "]" << std::endl;
}

Span::~Span()
{
	this->_vect.clear();
}
void Span::addNumber(int n)
{
	try
	{
		if (this->_vect.size() >= this->_limit)
			throw Span::OutOfBound();
		else
			this->_vect.push_back(n);
	}
	catch (const Span::OutOfBound &e)
	{
		std::cout << e.what() << '\n';
	}
}
void Span::addMany(int x)
{
	srand(time(NULL));
	int s = this->_vect.size();
	int r = rand() % 100 ;
	try
	{
		if (s + x > this->_limit)
			throw Span::OutOfBound();
		for (size_t i = s; i < this->_limit && i < x; i++)
		{
			this->_vect.push_back(r + i);
		}
	}
	catch (const Span::OutOfBound &e)
	{
		std::cout << e.what() << '\n';
	}
}

int Span::shortestSpan(void) const
{
	try
	{
		if (this->_vect.size() < 2)
			throw Span::NoSpan();
		int shortest = std::abs(this->_vect[0] - this->_vect[1]);
		for (uint i = 0; i < this->_vect.size(); i++)
		{
			for (uint j = i + 1; j < this->_vect.size(); j++)
			{
				if (std::abs(this->_vect[i] - this->_vect[j]) < shortest)
					shortest = std::abs(this->_vect[i] - this->_vect[j]);
			}
		}
		return shortest;
	}
	catch (const Span::NoSpan &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (-1);
}

int Span::longestSpan(void) const
{
	try
	{
		if (this->_vect.size() < 2)
			throw Span::NoSpan();
		int longest = std::abs(this->_vect[0] - this->_vect[1]);
		for (uint i = 0; i < this->_vect.size(); i++)
		{
			for (uint j = i + 1; j < this->_vect.size(); j++)
			{
				if (std::abs(this->_vect[i] - this->_vect[j]) > longest)
					longest = std::abs(this->_vect[i] - this->_vect[j]);
			}
		}
		return longest;
	}
	catch (const Span::NoSpan &e)
	{
		std::cout << e.what() << '\n';
	}
	return (-1);
}

const char *Span::OutOfMemory::what(void) const throw()
{
	return ("Sorry thre are no enough memory for your order");
}
const char *Span::OutOfBound::what(void) const throw()
{
	return ("Sorry limits are reached");
}
const char *Span::NoSpan::what(void) const throw()
{
	return ("No Span Found");
}