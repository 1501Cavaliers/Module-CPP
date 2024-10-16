/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platon <platon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:11:56 by platon            #+#    #+#             */
/*   Updated: 2024/10/12 20:12:05 by platon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	noob("Noob", 150);
		Bureaucrat	mid("Mid", 75);
		Bureaucrat	master("master", 1);
		Form		low("low", 150, 150);
		Form		medium("Medium", 75, 75);
		Form		crucial("Crucial", 1, 1);

		std::cout << "TEST : " << master << std::endl << crucial << std::endl;
        // noob.signForm(low);
        // noob.signForm(medium);
	
	}
	catch (std::exception &e)
	{
		std::cout << "Error grade. NO!" << std::endl;
	}
}