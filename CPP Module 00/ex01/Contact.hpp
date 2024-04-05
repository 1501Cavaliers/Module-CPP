/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:08:38 by flavian           #+#    #+#             */
/*   Updated: 2024/03/16 17:00:15 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	public :

	Contact(void);
	~Contact(void);
	int	set_info(int i, std::string str);
	std::string	get_info(int i) const;


	private :

	std::string	info[5];
	int		index;
};

#endif