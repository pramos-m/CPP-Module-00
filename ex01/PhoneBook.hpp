/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:07:54 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/02 15:55:59 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

#include    "Contact.hpp"
#include	"Contact_utils.hpp"

class PhoneBook
{
	private:
		Contact _contact[8];
		int     _size;
		int     _idx;
	public:
		//Default constructor
		PhoneBook();
		
		//Expanded constructor
		//PhoneBook(/* args */);
		
		void	addContact(Contact contact);
		Contact findContact(int n);
		int		getSize(void);
		~PhoneBook();
};


#endif
