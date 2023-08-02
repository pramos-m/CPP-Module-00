/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:24:32 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/02 16:01:36 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact_utils.hpp"

bool	check_str_num(std::string str)
{
	for (std::string::size_type i = 0; i < str.length(); i++)
		if (std::isdigit(str[i]) == 0)
			return (false);
	return (true);
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
