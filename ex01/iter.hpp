/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 19:06:06 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/04 10:18:17 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include "Colors.hpp"

template <typename Iter, typename Ft> 
void iter(Iter adr, int len, Ft ft) {
	for (int i = 0; i < len; i++) {
        ft(adr[i]);
    }
}