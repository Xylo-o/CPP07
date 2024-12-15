/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:42:28 by adprzyby          #+#    #+#             */
/*   Updated: 2024/12/15 18:10:08 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Colors.hpp"

template <typename Swap> 
void mySwap(Swap& arg1, Swap& arg2) {
	Swap tmp;
	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <typename Min>
Min myMin(Min& arg1, Min& arg2) {
	return (arg1 ? arg2 : arg1 < arg2);
}

template <typename Max>
Max myMax(Max& arg1, Max& arg2) {
	return (arg2 ? arg1 : arg1 > arg2);
}

