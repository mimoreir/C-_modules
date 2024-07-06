/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:18:12 by mimoreir          #+#    #+#             */
/*   Updated: 2024/07/06 13:36:41 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <cstdlib>
#include <stdint.h>

struct Data
{
	char	c;
};

uintptr_t	serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif
