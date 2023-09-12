/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:52:38 by mjafari           #+#    #+#             */
/*   Updated: 2023/09/04 10:00:23 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*
	ERROR check :
	1) program must be able to use a positive integer sequence as argument. (DONE)
	2) program must use a merge-insert sort algorithm to sort the positive integer
		sequence.
	3) If an error occurs during program execution, an error message should be displayed
		on the standard output
*/
int	check_args(int num)
{
	if ( num < 0 )
	{
		std::cout << INV_ARGS << std::endl;
		return 1;
	}
	else if ( num > 2147483647 )
	{
		std::cout << INV_RANGE << std::endl;
		return 1;
	}
	return 0;
}

int main(int argc, char *argv[])
{

	if ( argc < 2 )
	{
		std::cout << ARG_MISSING << std::endl;
		return EXIT_FAILURE;
	}


	std::vector<int> _vec;
	std::deque<int> _deq;

	int i = 1;
	while ( i < argc )
	{
		for( int j = 0; argv[i][j] !='\0'; j++ )
		{
			if ( !std::isdigit(argv[i][j]) )
			{
				std::cout << BAD_INPUT << std::endl;
				//std::cout << RED << argv[i][j] << RESET << std::endl;
				return 1;
			}
		}
		int num = std::atoi(argv[i]);
		if ( check_args(num) == 1 )
		{
			return 1;
		}
		else
		{
			_vec.push_back(num);
			_deq.push_back(num);
		}
		i += 1;
	}
	
	std::cout << "Unsorted before : ";
	for ( int i = 0; i < argc; i++ ) 
	{
        std::cout << argv[i] << " ";
    }
    std::cout << std::endl;
	
/* 	std::cout << "Unsorted vector before : ";
	for ( std::vector<int>::const_iterator iter = _vec.begin(); iter != _vec.end(); ++iter ) 
	{
        std::cout << YELLOW << *iter << " ";
    }
    std::cout << RESET << std::endl; */

	
/* 	std::cout << "Unsorted deque before: ";
    for ( std::deque<int>::const_iterator iter = _deq.begin(); iter != _deq.end(); ++iter )
	{
        std::cout << YELLOW << *iter << " ";
    }
    std::cout << RESET << std::endl; */

		/*   VEC vs. DEQ  */
	int sizeVec = _vec.size();
    int sizeDeq = _deq.size();

	PmergeMe cont(sizeVec, sizeDeq);

	cont.getTimeSortVec(_vec);
	cont.getTimeSortDeq(_deq);


	std::cout << "Sorted vector after : ";
	for ( std::vector<int>::const_iterator iter = _vec.begin(); iter != _vec.end(); ++iter ) 
	{
        std::cout << *iter << " ";
    }
    std::cout << std::endl;


	std::cout << "Sorted deque after : ";
    for ( std::deque<int>::const_iterator iter = _deq.begin(); iter != _deq.end(); ++iter )
	{
        std::cout << *iter << " ";
    }
    std::cout << std::endl;


    std::cout << "Time to process a range of " << _vec.size() << " elements with vector sort: " 
				<< cont._elapsedTimeVec << " μs" << std::endl;

  	std::cout << "Time to process a range of " << _deq.size() << " elements with deque sort: " 
				<< cont._elapsedTimeDeq << " μs" << std::endl;

	return 0;
}
