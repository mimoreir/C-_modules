#include "Data.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:10:04 by mimoreir          #+#    #+#             */
/*   Updated: 2024/07/06 13:18:10 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Data.hpp"

/*uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data * Serializer::deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data *>(ptr);
}*/

int main(void)
{
	Data *d = new Data;
	Data *otherPtr;
	uintptr_t ptr;
	d->c = 'm';
	std::cout << "       d:" << d << std::endl;
	std::cout << "otherPtr:" << otherPtr << std::endl;
	ptr = Serializer::serialize(d);
	otherPtr = Serializer::deserialize(ptr);
	std::cout << "       d:" << d << std::endl;
	std::cout << "otherPtr:" << otherPtr << std::endl;
	std::cout << d->c << std::endl;
	delete d;
	return 0;
}
