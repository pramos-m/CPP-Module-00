/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:13:26 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/02 15:08:37 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    _size = 0;
    _idx = 0;
}

PhoneBook::PhoneBook(Contact contact)
{
    _size = 0;
    _idx = 0;
    _contact [0] = contact;
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::getSize(void)
{
	return (_size);
}

Contact	PhoneBook::findContact(int	n)
{
	return (_contact[n]);
}

void	PhoneBook::addContact(Contact contact)
{
    _contact[_idx] = contact;
	_idx = (_idx + 1) % 8;
	if (_size < 8)
		_size++;
}
