/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 14:49:58 by kali              #+#    #+#             */
/*   Updated: 2025/01/04 15:51:56 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Colors.hpp"
#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        T& operator new[](unsigned int index);
        ~Array();
        
        unsigned int getSize() const;
    private:
        T* elements;
        size_t size;
}

#include "Array.tpp"