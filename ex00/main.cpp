/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:41:48 by adprzyby          #+#    #+#             */
/*   Updated: 2024/12/15 18:08:29 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
using namespace std;

int main (void) {
	int a = 3;
	int b = 7;
	
	cout << YELLOW << "Before swap: " << NC << a << YELLOW << ", " << NC << b << endl;
	mySwap<int>(a, b);
	cout << GREEN << "After swap: " << NC << a << GREEN << ", " << NC << b << endl;
	
	int minValue = myMin<int>(a, b);
	cout << BLUE << "The min value between " << NC << a << BLUE " and " << NC << b << BLUE << " is: " << NC << minValue << endl;
	
	int maxValue = myMax<int>(a, b);
	cout << MAGENTA << "The max value between " << NC << a << MAGENTA << " and " << NC << b << MAGENTA << " is: " << NC << maxValue << endl;
	return (0);
}