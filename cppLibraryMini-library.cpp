#include "Book.h"

Book bArray[10]; 		// global book array
int counter=0;			// counter to count have many book we have

void addBook(){									// add book to book array
	cout<<"---------------------"<<endl;
	cout<<" ADD BOOK TO LIBRARY"<<endl;
	cout<<"---------------------"<<endl;
	
	string b_name,b_author;
	int b_pageNum;
	static int id=1;							// static id to start from 1 and increment 1 each call of the function
	Book b(id++);								// Creating book object with id value.
	cout<<"Enter the name of Book: ";			
	cin>>b_name;
	b.setName(b_name);							// Setting Book name
	cout<<"Enter the author of Book: ";
	cin>>b_author;
	b.setAuthor(b_author);						// Setting Author of the book
	cout<<"Enter the Page Number of Book: ";
	cin>>b_pageNum;
	b.setPageNum(b_pageNum);					// Setting page number
	bArray[counter++]=b;						// Add book to array and increment book counter
}

void borrowBook(){
	cout<<"-------------"<<endl;
	cout<<" BORROW BOOK "<<endl;
	cout<<"-------------"<<endl;
	string name;
	cout<<"Enter the Name of the Book that you want to borrow: ";
	cin>>name;
	int flag=0; 	// to hold book is found or not 
	for(int i=0;i<counter;i++){						// to look the book we have
		if(name==bArray[i].getName()){				// if names are equal
			flag=1;									
			if(bArray[i].isAvailable()==true){		// if book is available
				bArray[i].setStatus(false);			// convert status false to borrow
				cout<<"Book Borrowed Succesfully"<<endl;
				bArray[i].printBookInfo();
			}
			else{									// book is already borrowed 
				cout<<"Book is not AVAILABLE"<<endl;
			}
			break;
		}
	}
	if(flag==0){		// if flag = 0 that means there is no book in our book array
		cout<<"No such book is found!!!"<<endl;
	}
}

void returnBook(){
	cout<<"-------------"<<endl;
	cout<<" RETURN BOOK "<<endl;
	cout<<"-------------"<<endl;
	
	string name;
	cout<<"Enter the Name of the Book that you want to return: ";
	cin>>name;
	int flag=0;
	for(int i=0;i<counter;i++){
		if(name==bArray[i].getName()){
			flag=1;
			if(bArray[i].isAvailable()==false){
				bArray[i].setStatus(true);
				cout<<"Book Returned Succesfully"<<endl;
				bArray[i].printBookInfo();
			}
			else{
				cout<<"Book is already AVAILABLE"<<endl;
			}
			break;
		}
	}
	if(flag==0){
		cout<<"No such book is found!!!"<<endl;
	}
}

void displayBooks(){
	cout<<"------------------------------"<<endl;
	cout<<" DISPLAY BOOKS IN THE LIBRARY"<<endl;
	cout<<"------------------------------"<<endl;
	for(int i=0;i<counter;i++){					// display all the books that we have
		bArray[i].printBookInfo();
		cout<<"------------------------------"<<endl;
	}
}

void menu(){
	cout<<"------------------------------"<<endl;
	cout<<" 1 - ADD a Book"<<endl;
	cout<<" 2 - BORROW a Book"<<endl;
	cout<<" 3 - RETURN a Book"<<endl;
	cout<<" 4 - DISPLAY Books"<<endl;
	cout<<" 5 - EXIT"<<endl;
	cout<<"------------------------------"<<endl;
}

int main(){
	
	int choice=0;
	while(choice!=5){
		menu();
		cin>>choice;
		switch(choice){
			case 1:
				addBook();
				break;
			case 2:
				borrowBook();
				break;
			case 3:
				returnBook();
				break;
			case 4: 
				displayBooks();
				break;
			case 5:
				cout<<"EXIT"<<endl;
				break;
			default:
				cout<<"INVALID ENTRY"<<endl;
		}	
	}	
}
