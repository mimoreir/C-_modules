/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:34:35 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 15:10:20 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
	const Animal *party[10];

	for (size_t i = 0; i < 10; i++)
	{
		if ( i % 2 == 0)
		{
			party[i] = new Dog();
		}
		else
		{
			party[i] = new Cat();
		}
	}

	for (size_t i = 0; i < 10; i++)
	{
		party[i]->makeSound();
	}

	for (size_t i = 0; i < 10; i++)
	{
		party[i]->printIdea(i % 3);
	}


	for (size_t i = 0; i < 10; i++)
	{
		delete party[i];
	}

	return 0;
}
