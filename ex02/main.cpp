/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 06:13:15 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/15 07:39:35 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Colors.hpp"

#define MAX_VAL 750
int main(int, char**) {
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

    std::std::cout << YELLOW << "Filling array with random values..." << NC << std::std::endl;
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    
    std::std::cout << GREEN << "Test passed!" << NC << std::std::endl;

    std::std::cout << YELLOW << "Testing copy constructor and assignment operator..." << NC << std::std::endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        if (tmp.size() != numbers.size() || test.size() != numbers.size()) {
            std::cerr << RED << "Size mismatch after copy!" << NC << std::std::endl;
            return 1;
        }
    }
    
    std::std::cout << GREEN << "Test passed!" << NC << std::std::endl;

    std::std::cout << YELLOW << "Checking integrity of data in copied arrays..." << NC << std::std::endl;
    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << RED << "didn't save the same value!!" << NC << std::std::endl;
            return 1;
        }
    }
    
    std::std::cout << GREEN << "Test passed!" << NC << std::std::endl;

    std::std::cout << YELLOW << "Testing out-of-bounds access..." << NC << std::std::endl;
    try {
        numbers[-2] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << RED << "Caught exception: " << NC << e.what() << '\n';
    }
    try {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << RED << "Caught exception: " << NC << e.what() << '\n';
    }
    
    std::std::cout << GREEN << "Test passed!" << NC << std::std::endl;

    std::std::cout << YELLOW << "Reassigning random values to the array..." << NC << std::std::endl;
    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }
    
    std::std::cout << GREEN << "Test passed!" << NC << std::std::endl;

    delete [] mirror;
    std::std::cout << GREEN << "All tests passed!" << NC << std::std::endl;
    return 0;
}