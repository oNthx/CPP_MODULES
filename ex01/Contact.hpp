/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 02:37:45 by bozgur            #+#    #+#             */
/*   Updated: 2022/10/03 22:26:22 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class	Contact
{
private:
	std::string	_name;
	std::string	_surname;
	std::string	_nickname;
	std::string	_phone;
	std::string	_dsecret;
	int			_idx;

	std::string	putlen(std::string str);
	std::string	get_input(std::string str);

public:
	Contact();
	~Contact();

	void	init(void);
	void	view(int idx);
	void	display(int idx);
	void	set_index(int i);
};
