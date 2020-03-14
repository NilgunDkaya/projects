#include <iostream>
using namespace std;


class Book{
	private:
		int bookId;
		string name;
		int pageNum;
		string author;
		bool status;
		
	public:
		Book(int=0,string="noName",int=0,string="noAuthor",bool=true);
		void printBookInfo();
	
		void setId(int);
		void setName(string);
		void setPageNum(int);
		void setAuthor(string);
		void setStatus(bool);
		int getId();
		string getName();
		int getPageNum();
		string getAuthor();
		bool isAvailable();
		
};
