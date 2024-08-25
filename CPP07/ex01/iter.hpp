/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:22:54 by mimoreir          #+#    #+#             */
/*   Updated: 2024/08/25 12:30:26 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

template<typename T>
void    iter(T *arr, int len, void (*foo)(T &))
{
    if (arr == NULL || len == 0 || foo == NULL)
        return ;
    for (int i = 0; i < len; i++)
    {
        foo(arr[i]);
    }
}
