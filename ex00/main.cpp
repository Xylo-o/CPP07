/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:41:48 by adprzyby          #+#    #+#             */
/*   Updated: 2024/12/15 19:02:11 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
using namespace std;

// int main (void) {
// 	return (0);
// }

int main( void ) {
	cout << CYAN << "==============================INT==============================" << NC << endl;
	int x = 3;
	int y = 7;
	
	cout << YELLOW << "Before swap: " << NC << x << YELLOW << ", " << NC << y << endl;
	mySwap<int>(x, y);
	cout << GREEN << "After swap: " << NC << x << GREEN << ", " << NC << y << endl;
	int minInt = myMin<int>(x, y);
	cout << BLUE << "The min value between " << NC << x << BLUE " and " << NC << y << BLUE << " is: " << NC << minInt << endl;
	int maxInt = myMax<int>(x, y);
	cout << MAGENTA << "The max value between " << NC << x << MAGENTA << " and " << NC << y << MAGENTA << " is: " << NC << maxInt << endl;
	
	cout << CYAN << "=============================DOUBLE============================" << NC << endl;
	double d1 = 5.3;
	double d2 = -2.1;
	cout << YELLOW << "Before swap: " << NC << d1 << YELLOW << ", " << NC << d2 << endl;
	mySwap<double>(d1, d2);
	cout << GREEN << "After swap: " << NC << d1 << GREEN << ", " << NC << d2 << endl;
	double minDouble = myMin<double>(d1, d2);
	cout << BLUE << "The min value between " << NC << d1 << BLUE " and " << NC << d2 << BLUE << " is: " << NC << minDouble << endl;
	double maxDouble = myMax<double>(d1, d2);
	cout << MAGENTA << "The max value between " << NC << d1 << MAGENTA << " and " << NC << d2 << MAGENTA << " is: " << NC << maxDouble << endl;
	
	cout << CYAN << "=============================CHAR==============================" << NC << endl;
	char c1 = 'f';
	char c2 = 'a';

	cout << YELLOW << "Before swap: " << NC << c1 << YELLOW << ", " << NC << c2 << endl;
	mySwap<char>(c1, c2);
	cout << GREEN << "After swap: " << NC << c1 << GREEN << ", " << NC << c2 << endl;
	char minChar = myMin<char>(c1, c2);
	cout << BLUE << "The min value between " << NC << c1 << BLUE " and " << NC << c2 << BLUE << " is: " << NC << minChar << endl;
	char maxChar = myMax<char>(c1, c2);
	cout << MAGENTA << "The max value between " << NC << c1 << MAGENTA << " and " << NC << c2 << MAGENTA << " is: " << NC << maxChar << endl;
	
	cout << CYAN << "============================STRING=============================" << NC << endl;
	string s1 = "Ferrari";
	string s2 = "Ford";
	cout << YELLOW << "Before swap: " << NC << s1 << YELLOW << ", " << NC << s2 << endl;
	mySwap<string>(s1, s2);
	cout << GREEN << "After swap: " << NC << s1 << GREEN << ", " << NC << s2 << endl;
	string minString = myMin<string>(s1, s2);
	cout << BLUE << "The min value between " << NC << s1 << BLUE " and " << NC << s2 << BLUE << " is: " << NC << minString << endl;
	string maxString = myMax<string>(s1, s2);
	cout << MAGENTA << "The max value between " << NC << s1 << MAGENTA << " and " << NC << s2 << MAGENTA << " is: " << NC << maxString << endl;
	
	cout << RED << "========================SUBJECT'S TESTS========================" << NC << endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	cout << "a = " << a << ", b = " << b << endl;
	cout << "min( a, b ) = " << ::min( a, b ) << endl;
	cout << "max( a, b ) = " << ::max( a, b ) << endl;
	string c = "chaine1";
	string d = "chaine2";
	::swap(c, d);
	cout << "c = " << c << ", d = " << d << endl;
	cout << "min( c, d ) = " << ::min( c, d ) << endl;
	cout << "max( c, d ) = " << ::max( c, d ) << endl;
	return 0;
}