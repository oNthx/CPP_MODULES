/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 02:42:05 by bozgur            #+#    #+#             */
/*   Updated: 2022/10/04 07:19:43 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::get_input(std::string str)
{
	std::string input = "";
	bool		valid = false;
	do
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Invalid input please try again." << std::endl;
		}
	} while (!valid);
	return (input);
}

void	Contact::init(void)
{
	std::cin.ignore();
	_name	= get_input("Name: ");
	_surname	= get_input("Surname: ");
	_nickname	= get_input("Nickname: ");
	_phone		= get_input("Phone: ");
	_dsecret	= get_input("Darkest Secret: ");
	std::cout << std::endl;
}

std::string Contact::putlen(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::set_index(int i)
{
	_idx = i;
}

void	Contact::view(int idx)
{
	if (_name.empty() || _surname.empty() || _nickname.empty())
		return ;
	std::cout << "|" << std::setw(10) << idx << std::flush;
	std::cout << "|" << std::setw(10) << putlen(_name) << std::flush;
	std::cout << "|" << std::setw(10) << putlen(_surname) << std::flush;
	std::cout << "|" << std::setw(10) << putlen(_nickname) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::display(int index)
{
	if (_name.empty() || _surname.empty() || _nickname.empty())
		return ;
	std::cout << std::endl;
	std::cout << "===+> CONTACT #" << index << " <+===" << std::endl;
	std::cout << "Name:\t" << _name << std::endl;
	std::cout << "Surname:\t" << _surname << std::endl;
	std::cout << "Nickname:\t" << _nickname << std::endl;
	std::cout << std::endl;
}
