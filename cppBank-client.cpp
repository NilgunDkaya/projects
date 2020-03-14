
#include "Client.h"
using std::cin;
using std::cout;
using std::endl;


Client::Client(){
	tc="";
	name="";
	birthYear=0;
}

void Client::setClientInfo(std::string a, std::string b, int c){
	tc = a;
	name = b;
	birthYear = c;	
}

void Client::printClientInfo(){
	cout<<"TC: "<< tc << endl << "Name: "<< name<< endl <<"Birth Year: "<<birthYear<<endl<<endl;
	account.printAccountInfo();
}

void Client::changePassword(){
	std::string oldPass,newPass,repeatPass;
	cout<<"Enter your old password: ";
	cin>>oldPass;
	if(oldPass == account.getPassword()){
		cout<<"Enter your new password: ";
		cin>>newPass;
		cout<<"Enter your new password again: ";
		cin>>repeatPass;
		if(newPass==repeatPass){
			cout<<"Your password changed correctly"<<endl;
			account.setPassword(newPass);
		}
		else{
			cout<<"Passwords are not matched!!"<<endl;
		}
	}
	else{
		cout<<"Your Password is not Correct!!"<<endl;
	}
}



