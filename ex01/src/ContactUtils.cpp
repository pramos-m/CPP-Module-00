/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactUtils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:24:32 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/04 15:27:47 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ContactUtils.hpp"
# include <cstdlib>
# include <iomanip>

bool	check_str_num(std::string str)
{
	for (std::string::size_type i = 0; i < str.length(); i++)
		if (std::isdigit(str[i]) == 0)
			return (false);
	return (true);
}

void	str_setw(std::string str)
{
	if (str.length() > 9)
		str.erase(9, str.length()).append(1, '.');
	std::cout << std::setw(10) << str;
}

std::string	get_field(std::string field, int mode)
{
	std::string		input;
	bool 			valid;

	valid = false;
	while (!valid)
	{
		std::cout << "  " << field << ": ";
		if (!std::getline(std::cin, input))
			exit(0);
		if (input.empty())
			std::cout << "The field cannot be empty" << std::endl;
		else if (mode == INT && check_str_num(input) == false)
			std::cout << "   Invalid input, the field '" << field \
			<< "' only accepts digits" << std::endl;
		else
			valid = true;
	}
	return (input);
}

Contact	create_contact(void)
{
	std::string	str;
	Contact		new_contact;
	
	str = get_field("first name", STR);
	new_contact.setFirst_name(str);
	str = get_field("last name", STR);
	new_contact.setLast_name(str);
	str = get_field("nickname", STR);
	new_contact.setNickname(str);
	str = get_field("darkest secret", STR);
	new_contact.setDarkest_secret(str);
	str = get_field("phone number", INT);
	new_contact.setPhone_number(str);
	return (new_contact);
}

void	print_contacts(PhoneBook phonebook)
{
	std::string	str;

	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < phonebook.getSize(); i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		str_setw(phonebook.findContact(i).getFirst_name());
		std::cout << "|";
		str_setw(phonebook.findContact(i).getLast_name());
		std::cout << "|";
		str_setw(phonebook.findContact(i).getNickname());
		std::cout << "|";
		std::cout << std::endl;
	}

}

void	search_contact(PhoneBook phonebook)
{
	std::string	str;
	short int	idx;
	bool		valid;

	if (phonebook.getSize() == 0)
	{
		std::cout << "   Phonebook is empty" << std::endl;
		return ;
	}
	print_contacts(phonebook);
	std::cout << "Select index: ";
	if (!std::getline(std::cin, str))
		exit(0);
	valid = check_str_num(str);
	idx = 0;
	if (valid == true)
		idx = std::atoi(str.c_str());
	if (valid == false || idx < 0 || idx > phonebook.getSize() - 1)
	{
		std::cout << "Invalid Index" << std::endl;
		return ;
	}
	std::cout << "First name: " << phonebook.findContact(idx).getFirst_name() << std::endl;
	std::cout << "Last name: " << phonebook.findContact(idx).getLast_name() << std::endl;
	std::cout << "Nickname: " << phonebook.findContact(idx).getNickname() << std::endl;
	std::cout << "Phone number: " << phonebook.findContact(idx).getPhone_number() << std::endl;
	std::cout << "Darkest secret: " << phonebook.findContact(idx).getDarkest_secret() << std::endl;
}
