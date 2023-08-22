/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:18:21 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:10:07 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ContactUtils.hpp"

void	show_options(void)
{
	std::cout << "Allowed options:\n *   ADD\n *   SEARCH\n *   EXIT" << std::endl;
}

int main(void)
{
    PhoneBook phonebook;
    std::string str;
    bool		open;

	open = true;
    show_options();
    while (open)
    {
		str = " ";
        if (!std::getline(std::cin, str) || str.compare("EXIT") == 0)
			open = false;
		else if (str.compare("ADD") == 0)
			phonebook.addContact(create_contact());
		else if (str.compare("SEARCH") == 0)
			search_contact(phonebook);
		else
		{
			std::cout << "Invalid Option \n";
			show_options();
		}
    }
    return (0);
}
