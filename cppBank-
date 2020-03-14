#include "Bank.h"
using std::cin;
using std::cout;
using std::endl;



Bank::Bank(){
	name="ANKARA BANK";
}

void Bank::setAccountInfo(Client *c1){
	cout<<"Welcome to "<<name<<endl;
	
	static int id = 1;
	std::string pass;
	float balance;
	
	cout<<"Enter your password:";
	cin>>pass;
	cout<<"Enter your balance:";
	cin>>balance;
	c1->account.setAccount(id,pass,balance);
	id++;
}

void Bank::transferMoney(Account *dest, Account *arrival){
	float amount;
	cout<<"Enter the amount that you want to transfer: ";
	cin>>amount;
	if(dest->withdraw(amount)){
		arrival->deposit(amount);
	}
	else{
		cout<<"You don't have that much money!!"<<endl;
	}
}
