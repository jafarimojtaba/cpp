/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:52:51 by mjafari           #+#    #+#             */
/*   Updated: 2023/09/04 09:53:26 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <deque>
#include <limits.h>


#define ARG_MISSING "Error : Integer sequence as argument is missing"
#define BAD_INPUT "Error : Input needs to contain only integers"
#define INV_ARGS "Error: Input needs to contain positive integers"
#define INV_RANGE "Error: Check out INT_MIN or INT_MAX"

class PmergeMe
{
	private:
	
		int _vecSize;
		int _deqSize;


	public:
		
		double _elapsedTimeVec;
		double _elapsedTimeDeq;

		PmergeMe();
		PmergeMe(int vecSize, int deqSize);
		PmergeMe(PmergeMe const &cpy);
		PmergeMe &operator=(PmergeMe const &rhs);
		~PmergeMe();

		
		void MergeSortVec(std::vector<int>& vec, int start, int end);
		void MergeSortDeq(std::deque<int>& deq, int start, int end);
		void MergeSortedVec(std::vector<int>& vec, int start, int middle, int end);
		void MergeSortedDeq(std::deque<int>& deq, int start, int middle, int end);

		void getTimeSortVec(std::vector<int> &vec);
		void getTimeSortDeq(std::deque<int> &deq);

};



#endif