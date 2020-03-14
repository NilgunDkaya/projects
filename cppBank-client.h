#include "account.h"
#include <iostream>

class Client {
	public:
		Client();
		void setClientInfo(std::string,std::string,int);
		void changePassword();
		void printClientInfo();
		Account account;
		
	private:
		std::string tc;
		std::string name;
		int birthYear;
				
};
