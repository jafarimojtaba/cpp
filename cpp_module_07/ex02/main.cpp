/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:11:04 by mjafari           #+#    #+#             */
/*   Updated: 2022/11/01 19:50:18 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main()
{
    // Array<int> numbers(MAX_VAL);
    // int* mirror = new int[MAX_VAL];
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     std::cout <<"line 29\n";
    //     Array<int> tmp = numbers;
    //     std::cout <<"line 31\n";
    //     Array<int> test(tmp);
    //     test = numbers;
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    //     std::cout << numbers[i] << std::endl;
    // }
    // delete [] mirror;//
    // return 0;

    std::cout << "Empty constructor test" << std::endl;
    Array<int> num;
    std::cout << "num.size(): " << num.size() << std::endl;
    std::cout << "size n constructor test" << std::endl;
    const Array<int> str(5);
    // {
    std::cout << "line 75\n";
    Array<int> test(5);
    std::cout << "line 77\n";
    try
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << "This is: " << test[i] << std::endl;
        }
    }
    catch (Array<int>::OutOfBound &e)
    {
        std::cout << "Exception:===" << e.what() << "=== caught" << std::endl;
    }

    test = str;
    // }
    std::cout << "str.size(): " << str.size() << std::endl;
    try
    {
        for (int i = 0; i <= 5; i++)
        {
            std::cout << "This is test: " << test[i] << std::endl;
            std::cout << "This is str: " << str[i] << std::endl;
        }
    }
    catch (Array<int>::OutOfBound &e)
    {
        std::cout << "Exception:===" << e.what() << "=== caught" << std::endl;
    }
}