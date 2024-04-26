/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:31:18 by flavian           #+#    #+#             */
/*   Updated: 2024/04/26 13:31:19 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream> 
# include <iomanip>

class Contact
{
private:
	std::string	name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:

	std::string getName()const;
	std::string getLast_name()const;
	std::string getNickname()const;
	std::string getPhone_number()const;
	std::string getDarkest_secret()const;
	void setName(std::string str);
	void setLast_name(std::string str);
	void setNickname(std::string str);
	void setPhone_number(std::string str);
	void setDarkest_secret(std::string str);
};





#endif