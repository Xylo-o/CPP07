/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 19:05:55 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/04 10:22:43 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
using namespace std;

template <typename T>
void bubbleSort(T a[], int len) {
    for (int i = 0; i < len - 1; i++)
        for (int j = len - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

template <typename T>
void printElement(T& element) {
    cout << BLUE << "The element: " << NC << element << endl;
}

int main () {
    
    int arr1[] = {5, 3, 1, -2 ,6};
    double arr2[] = {5.3, 3.7, 1.5, -2.1, 6.2};     
    char arr3[] = {'d', 'f', 's', 'u', 'o'};     
    string arr4[] = {"defg", "rtuy", "abcd", "qwerty", "lalala"};

    cout << YELLOW << "=================BEFORE SORTING=================" << NC << endl;

    iter(arr1, 5, printElement<int>);
    cout << MAGENTA << "===============================================" << NC << endl;
    iter(arr2, 5, printElement<double>);
    cout << MAGENTA << "===============================================" << NC << endl;
    iter(arr3, 5, printElement<char>);
    cout << MAGENTA << "===============================================" << NC << endl;
    iter(arr4, 5, printElement<string>);

    bubbleSort(arr1, 5);
    bubbleSort(arr2, 5);
    bubbleSort(arr3, 5);
    bubbleSort(arr4, 5);

    cout << YELLOW << "=================AFTER SORTING=================" << NC << endl;

    iter(arr1, 5, printElement<int>);
    cout << MAGENTA << "===============================================" << NC << endl;
    iter(arr2, 5, printElement<double>);
    cout << MAGENTA << "===============================================" << NC << endl;
    iter(arr3, 5, printElement<char>);
    cout << MAGENTA << "===============================================" << NC << endl;
    iter(arr4, 5, printElement<string>);
    
    return 0;
}