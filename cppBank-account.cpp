// account.cpp

#include <iostream>			// using input output functions
#include "Account.h"		// including Account.h to implement Account class
using std::cout;
using std::endl;



Account::Account(){				// implementation of Account constructor
	id=0; 						// assigning values in object creation
	password="default"; 
	balance=0.0;
}

void Account::setAccount(int x, std::string a, float b){		// to change all variables of account in a function
	id = x;					// for example id of account will be equal to first parameter which named x.
	password = a;
	balance = b;	
}

void Account::printAccountInfo(){		// implementation of printAccountInfo function of Account
	cout<<"ID: "<< id << endl << "Password: "<< password<< endl <<"Balance: "<<balance<<endl<<endl;
}		
	// When you are implementing the methods by calling like Account::SOMETHING that mean you can reach
	// any variable of Account class by just calling its name.

bool Account::withdraw(float money){		// withdraw money
	if(balance<money){						// if balance less than the money that we want to withdraw
		cout<<"You don't have that much money!!"<<endl;
		return false;
	}
	else{
		balance = balance - money;
		cout<<"Your withdraw is successful"<<endl;
		cout<<"Your new balance is: "<< balance<<endl;
		return true;
	}
}

void Account::deposit(float money){				// increases the balance according to the money that we send.
	balance = balance + money;					
	cout<<"Your deposit is successful"<<endl;
	cout<<"Your new balance is: "<< balance<<endl;

}

void Account::setPassword(std::string x){		// change password value with the parameter
	password = x;
}

std::string Account::getPassword(){				// returns password value.
	return password;
}



