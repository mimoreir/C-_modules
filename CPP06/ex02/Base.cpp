/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:00:40 by mimoreir          #+#    #+#             */
/*   Updated: 2024/08/06 10:20:30 by mimoreir         ###   ########.fr       */
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
	std::cout << n << std::endl;
	switch (n)
	{
		case 0:
			std::cout << "Generated A class" << std::endl;
			return new A;
		case 1:
			std::cout << "Generated B class" << std::endl;
			return new B;
		case 2:
			std::cout << "Generated C class" << std::endl;
			return new C;
		default:
			break;
	}
	return NULL;
}

void identify(Base* p)
{
		if (dynamic_cast<A *>(p))
		std::cout << "A is the identified type" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B is the identified type" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C is the identified type" << std::endl;
	else
		std::cout << "unknown type" << std::endl;
}

void identify(Base& p)
{
	Base	ptr;
	try
	{
		ptr = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::exception& e) {}
	try
	{
		ptr = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::exception& e) {}
	try
	{
		ptr = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::exception& e) {}
}

int main(void)
{
	Base	*base;

	srand(time(NULL));
	
	base = generate();
	identify(base);
	delete base;
	
	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	std::cout << "\nIdentifying with references\n" << std::endl;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;
	
	return 0;
}
