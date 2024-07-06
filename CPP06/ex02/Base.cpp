/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:00:40 by mimoreir          #+#    #+#             */
/*   Updated: 2024/07/06 15:02:05 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
}

Base::~Base()
{

}

Base * generate(void)
{
	std::srand(time(NULL));
	int n = rand() % 3;
	switch (n)
	{
		case 1:
			std::cout << "Generated A class" << std::endl;
			return new A;
		case 2:
			std::cout << "Generated B class" << std::endl;
			return new B;
		case 3:
			std::cout << "Generated C class" << std::endl;
			return new C;
		default:
			break;
	}
}

void identify(Base* p)
{
	(void)p;
}

void identify(Base& p)
{
	(void)p;
}

int main(void)
{
	
	return 0;
}
