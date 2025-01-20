/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 06:13:15 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/20 14:28:11 by adprzyby         ###   ########.fr       */
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

    std::cout << YELLOW << "Filling array with random values..." << NC << std::endl;
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    
    std::cout << GREEN << "Test passed!" << NC << std::endl;

    std::cout << YELLOW << "Testing copy constructor and assignment operator..." << NC << std::endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        if (tmp.size() != numbers.size() || test.size() != numbers.size()) {
            std::cerr << RED << "Size mismatch after copy!" << NC << std::endl;
            return 1;
        }
    }
    
    std::cout << GREEN << "Test passed!" << NC << std::endl;

    std::cout << YELLOW << "Checking integrity of data in copied arrays..." << NC << std::endl;
    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << RED << "didn't save the same value!!" << NC << std::endl;
            return 1;
        }
    }
    
    std::cout << GREEN << "Test passed!" << NC << std::endl;

    std::cout << YELLOW << "Testing out-of-bounds access..." << NC << std::endl;
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
    
    std::cout << GREEN << "Test passed!" << NC << std::endl;

    std::cout << YELLOW << "Reassigning random values to the array..." << NC << std::endl;
    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }
    
    std::cout << GREEN << "Test passed!" << NC << std::endl;

    delete [] mirror;
    std::cout << CYAN << "All tests passed!" << NC << std::endl;
    return 0;
}