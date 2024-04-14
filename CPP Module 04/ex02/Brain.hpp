/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:24:32 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 16:52:25 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain& tmp);
	~Brain();
	std::string	getIdeas(int i);
};

#endif
