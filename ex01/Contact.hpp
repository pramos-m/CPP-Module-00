/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:13:12 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/02 15:31:06 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
#define __CONTACT_H__

# include   <iostream>
# include	<string>

# define STR	(int)0
# define INT	(int)1

class Contact
{
        private:
                std::string	_first_name;
                std::string	_last_name;
                std::string	_nickname;
				std::string	_darkest_secret;
                std::string	_phone_number;
        public:
            // Default constructor
            Contact(void);
            
            // Expanded constructor
            Contact(std::string _first_name, std::string	_last_name, \
           		std::string _nickname, std::string	_darkest_secret, \
            	int	_phone_number);
            
            //Destructor
            ~Contact();
            
            //Getter
            std::string		getFirst_name(void);
            std::string		getLast_name(void);
            std::string		getNickname(void);
            std::string		getDarkest_secret(void);
            std::string		getPhone_number(void);
            //Setter
            void			setFirst_name(std::string first_name);
            void			setLast_name(std::string last_name);
            void			setNickname(std::string nickname);
            void			setDarkest_secret(std::string darkest_secret);
            void			setPhone_number(std::string phone_number);
};

#endif
