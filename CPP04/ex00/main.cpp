/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:33:51 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 13:55:23 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "-------Animal--------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << "-----WrongAnimal-----" << std::endl;
	const WrongAnimal* met = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();
	std::cout << met->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	x->makeSound();
	met->makeSound();
	delete met;
	delete x;
	return 0;
}
