/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:03:56 by bozgur            #+#    #+#             */
/*   Updated: 2022/10/03 22:16:24 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class	PhoneBook
{
private:
	Contact	_contacts[8];

public:
	PhoneBook();
	~PhoneBook();
	
	void	add_contact();
	void	list_contacts(void);
	void	search(void);
};
