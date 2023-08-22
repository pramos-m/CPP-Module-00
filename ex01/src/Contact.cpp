/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:08:28 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:10:01 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact(void)
{
}
Contact::~Contact()
{
}

Contact::Contact(std::string first_name, std::string last_name, \
				std::string nickname, std::string darkest_secret, \
				int	phone_number)
{
    _first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_darkest_secret = darkest_secret;
	_phone_number = phone_number;
}

std::string Contact::getFirst_name(void)
{
    return (_first_name);
}

std::string Contact::getLast_name(void)
{
    return (_last_name);
}

std::string Contact::getNickname(void)
{
    return (_nickname);
}

std::string Contact::getDarkest_secret(void)
{
    return (_darkest_secret);
}

std::string Contact::getPhone_number(void)
{
    return (_phone_number);
}

void    Contact::setFirst_name(std::string first_name)
{
    _first_name = first_name;
}

void    Contact::setLast_name(std::string last_name)
{
    _last_name = last_name;
}

void    Contact::setNickname(std::string nickname)
{
    _nickname = nickname;
}

void    Contact::setDarkest_secret(std::string darkest_secret)
{
    _darkest_secret = darkest_secret;
}

void    Contact::setPhone_number(std::string phone_number)
{
    _phone_number = phone_number;
}
