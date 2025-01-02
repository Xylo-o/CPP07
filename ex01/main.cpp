/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 19:05:55 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/02 15:20:00 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
using namespace std;

template <typename T>
void bubbleSort(T a[], int len) {
    for (int i = 0; i < len - 1; i++)
        for (int j = len - 1; i < j; j--)
            if (a[j] < a[j - 1])
                std::swap(a[j], a[j - 1]);
}

template <typename T>
void printArray(T a[], int len) {
    cout << GREEN << "Sorted array: " << NC << endl;
    for (int i = 0; i < len; ++i) {
        cout << a[i] << endl;
    }
}

int main () {
    
    int arr1[] = {5, 3, 1, -2 ,6};
    double arr2[] = {5.0, 3.0, 1.5, -2.1, 6.0};     
    char arr3[] = {'d', 'f', 's', 'u', 'o'};     
    std::string arr4[] = {"defg", "rtuy", "abcd", "qwerty", "lalala"};     
    
    iter(arr1, 5, bubbleSort<int>);
    iter(arr2, 5, bubbleSort<double>);
    iter(arr3, 5, bubbleSort<char>);
    iter(arr4, 5, bubbleSort<std::string>);
    
    printArray(arr1, 5);
    printArray(arr2, 5);
    printArray(arr3, 5);
    printArray(arr4, 5);
    
    return 0;
}