/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 10:26:56 by kali              #+#    #+#             */
/*   Updated: 2025/01/04 10:29:46 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"

template <typename Swap> 
void mySwap(Swap& arg1, Swap& arg2) {
	Swap tmp;
	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <typename Min>
Min myMin(Min& arg1, Min& arg2) {
	return (arg1 < arg2) ? arg1 : arg2;
}

template <typename Max>
Max myMax(Max& arg1, Max& arg2) {
	return (arg1 > arg2) ? arg1 : arg2;
}