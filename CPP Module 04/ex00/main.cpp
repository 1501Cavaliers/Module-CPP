/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:51:46 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 16:21:06 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int	main(void)
{
	{
		const	Animal* meta = new Animal();
		const	Animal* cat = new Cat();
		const	Animal* dog = new Dog();

		std::cout << meta->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		std::cout << dog->getType() << std::endl;

		meta->makeSound();
		cat->makeSound();
		dog->makeSound();

		delete meta;
		delete cat;
		delete dog;
	}
	std::cout << std::endl << std::endl;
	{
		const	WrongAnimal* Wmeta = new WrongAnimal();
		const	WrongAnimal* Wcat= new WrongCat();
		const	WrongAnimal* Wdog = new WrongDog();

		std::cout << Wmeta->getType() << std::endl;
		std::cout << Wcat->getType() << std::endl;
		std::cout << Wdog->getType() << std::endl;

		Wmeta->makeSound();
		Wcat->makeSound();
		Wdog->makeSound();

		delete Wmeta;
		delete Wcat;
		delete Wdog;

	}

	return (0);
}