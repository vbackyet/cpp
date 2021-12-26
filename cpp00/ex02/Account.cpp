#include "Account.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <chrono>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account(void)
{
// 	[20211126_152748] index:0;amount:42;created
// [20211126_152748] index:1;amount:54;created
// [20211126_152748] index:2;amount:957;created
// [20211126_152748] index:3;amount:432;created
// [20211126_152748] index:4;amount:1234;created
// [20211126_152748] index:5;amount:0;created
// [20211126_152748] index:6;amount:754;created
// [20211126_152748] index:7;amount:16576;created
	//что делает когда инициализирует класс

	this->_accountIndex = _nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	// std::cout<<"index:"<<_accountIndex <<";amount:" <<;created<<std::endl;
}


void _displayTimestamp()
{
	std::tm start{};
    start.tm_mday = 1;
 
    std::mktime(&start);
    std::cout << std::asctime(&start)
              << "sizeof(std::tm) = "
              << sizeof(std::tm) << '\n';
}


Account::Account( int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount+=initial_deposit;
	_displayTimestamp()<<" index:"<< this->_accountIndex<<";amount:"<<this->_amount <<";created"<<std::endl ;
}
	
// ~Account( void );

int Account::getNbAccounts()
{
	// for (i = 0, i  ,i++)
	// {

	// } 
}

int Account::getTotalAmount()
{

}

int Account::getNbDeposits()
{

}

int Account::getNbWithdrawals()
{

}

void Account::displayAccountsInfos()
{
	//показывает информацию об аккаунтах
	// this->

}
