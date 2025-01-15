/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:41:48 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/15 07:41:39 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
	std::cout << CYAN << "==============================INT==============================" << NC << std::endl;
	int x = 3;
	int y = 7;
	
	std::cout << YELLOW << "Before swap: " << NC << x << YELLOW << ", " << NC << y << std::endl;
	mySwap<int>(x, y);
	std::cout << GREEN << "After swap: " << NC << x << GREEN << ", " << NC << y << std::endl;
	int minInt = myMin<int>(x, y);
	std::cout << BLUE << "The min value between " << NC << x << BLUE " and " << NC << y << BLUE << " is: " << NC << minInt << std::endl;
	int maxInt = myMax<int>(x, y);
	std::cout << MAGENTA << "The max value between " << NC << x << MAGENTA << " and " << NC << y << MAGENTA << " is: " << NC << maxInt << std::endl;
	
	std::cout << CYAN << "=============================DOUBLE============================" << NC << std::endl;
	double d1 = 5.3;
	double d2 = -2.1;
	std::cout << YELLOW << "Before swap: " << NC << d1 << YELLOW << ", " << NC << d2 << std::endl;
	mySwap<double>(d1, d2);
	std::cout << GREEN << "After swap: " << NC << d1 << GREEN << ", " << NC << d2 << std::endl;
	double minDouble = myMin<double>(d1, d2);
	std::cout << BLUE << "The min value between " << NC << d1 << BLUE " and " << NC << d2 << BLUE << " is: " << NC << minDouble << std::endl;
	double maxDouble = myMax<double>(d1, d2);
	std::cout << MAGENTA << "The max value between " << NC << d1 << MAGENTA << " and " << NC << d2 << MAGENTA << " is: " << NC << maxDouble << std::endl;
	
	std::cout << CYAN << "=============================CHAR==============================" << NC << std::endl;
	char c1 = 'f';
	char c2 = 'a';

	std::cout << YELLOW << "Before swap: " << NC << c1 << YELLOW << ", " << NC << c2 << std::endl;
	mySwap<char>(c1, c2);
	std::cout << GREEN << "After swap: " << NC << c1 << GREEN << ", " << NC << c2 << std::endl;
	char minChar = myMin<char>(c1, c2);
	std::cout << BLUE << "The min value between " << NC << c1 << BLUE " and " << NC << c2 << BLUE << " is: " << NC << minChar << std::endl;
	char maxChar = myMax<char>(c1, c2);
	std::cout << MAGENTA << "The max value between " << NC << c1 << MAGENTA << " and " << NC << c2 << MAGENTA << " is: " << NC << maxChar << std::endl;
	
	std::cout << CYAN << "============================STRING=============================" << NC << std::endl;
	std::string s1 = "Ferrari";
	std::string s2 = "Ford";
	std::cout << YELLOW << "Before swap: " << NC << s1 << YELLOW << ", " << NC << s2 << std::endl;
	mySwap<std::string>(s1, s2);
	std::cout << GREEN << "After swap: " << NC << s1 << GREEN << ", " << NC << s2 << std::endl;
	std::string minString = myMin<std::string>(s1, s2);
	std::cout << BLUE << "The min value between " << NC << s1 << BLUE " and " << NC << s2 << BLUE << " is: " << NC << minString << std::endl;
	std::string maxString = myMax<std::string>(s1, s2);
	std::cout << MAGENTA << "The max value between " << NC << s1 << MAGENTA << " and " << NC << s2 << MAGENTA << " is: " << NC << maxString << std::endl;
	
	std::cout << RED << "========================SUBJECT'S TESTS========================" << NC << std::endl;
	int a = 2;
	int b = 3;
	std::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << std::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << std::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << std::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << std::max( c, d ) << std::endl;
	return 0;
}