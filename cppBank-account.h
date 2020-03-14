// Account.h 

#include <iostream>

class Account {
	public:
		Account();	 // constructor
		void setAccount(int,std::string,float);  // Setting account variables 
		void printAccountInfo();				// Printing account info
		bool withdraw(float money);				// Withdraw money
		void deposit(float money);				// Deposit money
		void setPassword(std::string x);		// changing password
		std::string getPassword();				// get password value to check in main
	private:
		int id;
		std::string password;
		float balance;		
};
