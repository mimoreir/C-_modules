/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:25:59 by mimoreir          #+#    #+#             */
/*   Updated: 2024/08/06 10:32:40 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

template<typename T>
void    swap(T& a, T&b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T&    min(T& a, T&b)
{
	return (a < b ? a : b);
}

template<typename T>
const T&    max(T& a, T&b)
{
	return (a > b ? a : b);
}