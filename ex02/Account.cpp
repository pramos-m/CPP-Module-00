/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:45:59 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/04 15:47:11 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Account.hpp"
#include	<iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


int	Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
    ;
}

void	Account::displayAccountsInfos( void )
{
    ;
}

Account::Account( void ) {}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532] ";
}