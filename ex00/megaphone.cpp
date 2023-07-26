/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:15:55 by pramos-m          #+#    #+#             */
/*   Updated: 2023/07/26 19:29:06 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>	

int main(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (ac > 1 && av[++j])
	{
		i = -1;
		while (j > 0 && av[j][++i])
			std::cout << (char)std::toupper(av[j][i]);
		if (j + 1 < ac)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}