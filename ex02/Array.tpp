/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:36:37 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/15 06:33:29 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _elements(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(const Array& other) : _elements(nullptr), _size(other._size) {
    _elements = new T[_size];
    for (std::size_t i = 0; i < _size; ++i) {
        _elements[i] = other._elements[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this == &other) {
        return *this;
    }

    delete[] _elements;

    _size = other._size;
    _elements = new T[_size];
    for (std::size_t i = 0; i < _size; ++i) {
        _elements[i] = other._elements[i];
    }

    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] _elements;
}

template <typename T>
T& Array<T>::operator[](std::size_t index) {
    if (index >= _size) {
        throw std::out_of_range("Index out of bounds");
    }
    return _elements[index];
}

template <typename T>
const T& Array<T>::operator[](std::size_t index) const {
    if (index >= _size) {
        throw std::out_of_range("Index out of bounds");
    }
    return _elements[index];
}

template <typename T>
std::size_t Array<T>::size() const {
    return _size;
}