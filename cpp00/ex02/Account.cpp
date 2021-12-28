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


Account::~Account(void)
{
// [19920104_091532] index:0;amount:47;closed
// [19920104_091532] index:1;amount:785;closed
// [19920104_091532] index:2;amount:864;closed
// [19920104_091532] index:3;amount:430;closed
// [19920104_091532] index:4;amount:1245;closed
// [19920104_091532] index:5;amount:23;closed
// [19920104_091532] index:6;amount:106;closed
// [19920104_091532] index:7;amount:8942;closed
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
	<<";amount:"<<this->_amount 
	<<";closed"<<std::endl ;

	// std::cout<< " закончилась программа"<<std::endl;
}

void Account::_displayTimestamp()
{
	// std::tm start{};
    // start.tm_mday = 1;
 
    // std::mktime(&start);
    // std::cout << std::asctime(&start)
    //           << "sizeof(std::tm) = "
    //           << sizeof(std::tm) << '\n';
	std::cout << "ТИпо время ";
}


Account::Account( int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount+=initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<";amount:"<<this->_amount <<";created"<<std::endl ;
}

// ~Account( void );
// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
// void Account::displayStatus(void) const
// {
// 	Account::_displayTimestamp();
// 	std::cout << "index:" << this->_accountIndex << ";";
// 	std::cout << "amount:" << this->_amount << ";";
// 	std::cout << "deposits:" << this->_nbDeposits << ";";
// 	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
// }


// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0

void	Account::displayStatus() const
{
	_displayTimestamp();

	std::cout  
	<< " index:" << this->_accountIndex 
	<<";amount:" << this->_amount 
	<<";deposits:" << this->_nbDeposits
	<<";withdrawals:" << this->_nbWithdrawals
	<<std::endl ;
}

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
// [19920104_091532] index:1;p_amount:54;deposit:765;amount:819;nb_deposits:1
// [19920104_091532] index:2;p_amount:957;deposit:564;amount:1521;nb_deposits:1
// [19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
// [19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
// [19920104_091532] index:5;p_amount:0;deposit:23;amount:23;nb_deposits:1
// [19920104_091532] index:6;p_amount:754;deposit:9;amount:763;nb_deposits:1
// [19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1


void Account::makeDeposit( int deposit )
{
	
	_displayTimestamp();

	std::cout
	<< " index:" << this->_accountIndex 
	<<";p_amount:" << this->_amount 
	<<";deposit:" << deposit
	<<";amount:" << (this->_amount) + deposit
	<<";nb_deposits:" << (this->_nbDeposits) + 1
	<<std::endl;
	
	this->_nbDeposits++;
	this->_amount+=deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
// [19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
// [19920104_091532] index:3;p_amount:434;withdrawal:4;amount:430;nb_withdrawals:1
// [19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
// [19920104_091532] index:5;p_amount:23;withdrawal:refused
// [19920104_091532] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
// [19920104_091532] index:7;p_amount:16596;withdrawal:7654;amount:8942;nb_withdrawals:1

bool Account::makeWithdrawal( int withdrawal )
{
	
	_displayTimestamp();

	std::cout
	<< " index:" << this->_accountIndex 
	<<";p_amount:" << this->_amount ;
	if(this->_amount >= withdrawal){
		std::cout
		<<";withdrawal:" << withdrawal
		<<";amount:" << (this->_amount) - withdrawal
		<<";nb_withdrawals:" << (this->_nbWithdrawals) + 1
		<<std::endl;
		
		this->_nbWithdrawals++;
		this->_amount-=withdrawal;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		}
	else{
		std::cout
		<<";withdrawal:" << "refused"
		<<std::endl;
	}
	

}



int Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	//показывает информацию об аккаунтах
	_displayTimestamp();

	std::cout  
	<< " accounts:" << Account::_nbAccounts 
	<< ";total:"<< Account::_totalAmount 
	<< ";deposits:"<< Account::_totalNbDeposits
	<< ";withdrawals:" << Account::_totalNbWithdrawals
	<<std::endl ;
}
