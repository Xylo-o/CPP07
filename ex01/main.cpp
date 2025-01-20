/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 19:05:55 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/20 14:25:52 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void bubbleSort(T a[], int len) {
    for (int i = 0; i < len - 1; i++)
        for (int j = len - 1; i < j; j--)
            if (a[j] < a[j - 1])
                std::swap(a[j], a[j - 1]);
}

template <typename T>
void printElement(T& element) {
    std::cout << BLUE << "The element: " << NC << element << std::endl;
}

int main () {
    
    int arr1[] = {5, 3, 1, -2 ,6};
    double arr2[] = {5.3, 3.7, 1.5, -2.1, 6.2};     
    char arr3[] = {'d', 'f', 's', 'u', 'o'};     
    std::string arr4[] = {"defg", "rtuy", "abcd", "qwerty", "lalala"};

    std::cout << YELLOW << "=================BEFORE SORTING=================" << NC << std::endl;

    iter(arr1, 5, printElement<int>);
    std::cout << MAGENTA << "===============================================" << NC << std::endl;
    iter(arr2, 5, printElement<double>);
    std::cout << MAGENTA << "===============================================" << NC << std::endl;
    iter(arr3, 5, printElement<char>);
    std::cout << MAGENTA << "===============================================" << NC << std::endl;
    iter(arr4, 5, printElement<std::string>);

    bubbleSort(arr1, 5);
    bubbleSort(arr2, 5);
    bubbleSort(arr3, 5);
    bubbleSort(arr4, 5);

    std::cout << YELLOW << "=================AFTER SORTING=================" << NC << std::endl;

    iter(arr1, 5, printElement<int>);
    std::cout << MAGENTA << "===============================================" << NC << std::endl;
    iter(arr2, 5, printElement<double>);
    std::cout << MAGENTA << "===============================================" << NC << std::endl;
    iter(arr3, 5, printElement<char>);
    std::cout << MAGENTA << "===============================================" << NC << std::endl;
    iter(arr4, 5, printElement<std::string>);
    
    return 0;
}