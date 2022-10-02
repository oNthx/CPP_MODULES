/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:03:56 by bozgur            #+#    #+#             */
/*   Updated: 2022/10/02 21:22:11 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

struct contact {
	std::string name;
	std::string surname;
	std::string nickname;
	std::string phone;
	std::string dsecret;
};

class	PhoneBook
{
private:
	int				number;
	std::vector<struct contact> contacts;
public:
	PhoneBook();
	~PhoneBook();
	
	void			add_contact();
	
};
