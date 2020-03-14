#include "Book.h"


Book::Book(int b_id,string b_name,int b_page,string b_author,bool b_status){
	bookId=b_id;
	name = b_name;
	pageNum = b_page;
	author = b_author;
	status = b_status;
}

void Book::printBookInfo(){
	cout<<"ID: "<<bookId<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Page Num: "<<pageNum<<endl;
	cout<<"Author: "<<author<<endl;
	if(status){
		cout<<"Status: Available"<<endl;	
	}
	else{
		cout<<"Status: Borrowed"<<endl;
	}
}

void Book::setId(int b_id){
	if(b_id>0){
		bookId=b_id;
	}
	else{
		cout<<"Invalid ID"<<endl;
	}
}

int Book::getId(){
	return bookId;
}

void Book::setName(string b_name){
	name=b_name;
}

string Book::getName(){
	return name;
}

void Book::setPageNum(int b_pageNum){
	if(b_pageNum>0){
		pageNum=b_pageNum;
	}
	else{
		cout<<"Invalid Page Number"<<endl;
	}
}

int Book::getPageNum(){
	return pageNum;
}

void Book::setAuthor(string b_author){
	author=b_author;
}

string Book::getAuthor(){
	return author;
}

void Book::setStatus(bool b_status){
	if(status==b_status){
		cout<<"Status is same already"<<endl;
	}
	else{
		status=b_status;
	}
}

bool Book::isAvailable(){
	return status;
}

