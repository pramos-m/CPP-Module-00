/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactUtils.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:25:02 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/04 14:29:47 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACTUTILS_H__
# define __CONTACTUTILS_H__

# include "PhoneBook.hpp"

Contact	create_contact(void);
void	search_contact(PhoneBook phonebook);
bool	check_str_num(std::string str);
void    str_setw(std::string str);

#endif
