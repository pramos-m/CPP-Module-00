/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:07:54 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/01 12:41:27 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

#include    "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contact[8];
		int     size;
		int     idx;
	public:
		//Default constructor
		PhoneBook();
		
		//Expanded constructor
		PhoneBook(/* args */);
		
		void	addContact(Contact contact);
		Contact findContact(int n);
		int		getSize(void);
		~PhoneBook();
};

void	PhoneBook::addContact(Contact contact)
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
PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}


#endif