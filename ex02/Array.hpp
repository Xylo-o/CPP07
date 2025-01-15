/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 14:49:58 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/15 06:33:21 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <stdexcept>

template <typename T>
class Array {
public:
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();

    T& operator[](std::size_t index);
    const T& operator[](std::size_t index) const;

    std::size_t size() const;
private:
    T* _elements;
    std::size_t _size;
};

#include "Array.tpp"