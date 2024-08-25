/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:18:12 by mimoreir          #+#    #+#             */
/*   Updated: 2024/08/25 14:06:44 by mimoreir         ###   ########.fr       */
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

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &src){
			*this = src;
		}
	public:
		~Serializer(){}
		Serializer &operator=(const Serializer &src){
			if (this == &src)
				return *this;
			return *this;
		}
		static uintptr_t serialize(Data *ptr){
			return reinterpret_cast<uintptr_t>(ptr);
		}
		static Data *deserialize(uintptr_t raw){
			return reinterpret_cast<Data *>(raw);
		}
};

#endif
