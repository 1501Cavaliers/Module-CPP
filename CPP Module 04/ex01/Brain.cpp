/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:26:45 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 16:51:20 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "*Mind Blank*";
}

Brain::Brain(const Brain& tmp)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = tmp.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain copy constructor called" << std::endl;
	// delete[] this->ideas;
}

std::string	Brain::getIdeas(int i)
{
	return (this->ideas[i]);
}