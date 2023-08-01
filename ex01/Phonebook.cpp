/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:13:26 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/01 14:15:25 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    _size = 0;
    _idx = 0;
}

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::getSize(void)
{
	return (size);
}

Contact	PhoneBook::findContact(int	n)
{
	return (_contact[n]);
}