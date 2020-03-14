#include "Client.h"
#include <iostream>

class Bank {
	public:
		Bank();
		void setAccountInfo(Client *c1);
		void transferMoney(Account *a1, Account *a2);
	private:
		std::string name;		
};
