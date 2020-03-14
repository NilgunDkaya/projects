//testBankAccount.cpp

#include "Bank.h"
using std::cin;
using std::cout;
using std::endl;

//#include "account.h"		// we ignore them because Bank has account.h and Client.h
//#include "Client.h"		// if we define them again we will get error

void setClient(Client *c){	// method for taking client Info
	std::string tc,name;
	int year;
	
	cout<<"Enter your TC:";
	cin>> tc;
	cout<<"Enter your name: ";
	cin>> name;
	cout<<"Enter your birth year: ";
	cin>>year;
	
	c->setClientInfo(tc,name,year);
}


int main(){
	Client c1,c2;				// Creating client objects
	Bank b1;					// Creating a bank object
	setClient(&c1);				// Setting Client1 Info 
	b1.setAccountInfo(&c1);		// Setting Client1 Account Info by using Bank object
	c1.printClientInfo();		// Printing Client1 Info
	c1.changePassword();		// Changing Password of Client1
	c1.printClientInfo();		// Printing Client1 Info
	
	setClient(&c2);				// Setting Client2 Info
	b1.setAccountInfo(&c2);		// Setting Client2 Account Info by using Bank object
	c2.printClientInfo();		// Printing Client2 Info

	// Transfering money from Client1 to Client2
	b1.transferMoney(&(c1.account),&(c2.account)); 
	
	c1.printClientInfo();	// Printing Client1 Info
	c2.printClientInfo();	// Printing Client2 Info
	
	return 0;
	
}
