#include<iostream>
#include<string.h>
using namespace std;
class Book{
	private:
		int bookno;
		char title[101],author[101];
		float price;
	public:
		Book(int bookno,char *title,char *author,float price){
			this->bookno=bookno;
			strcpy(this->title,title);
			strcpy(this->author,author);
			this->price=price;
		}
		void setbookno(){
			this->bookno=bookno;
		}
		void settitle(){
			strcpy(this->title,title);
		}
		void setauthor(){
			strcpy(this->author,author);
		}
		void setprice(){
			this->price=price;
		}
		int getbookno(){
			return bookno;
		}
		char *gettitle(){
			return title;
		}
		char *getauthor(){
			return author;
		}
		float getprice(){
			return price;
		}
		float discount(){
			float d;
			if(price>=3000){
				d=price*0.3F;
			}
			else if(price>=2000){
				d=price*0.2F;
			}
			else{
				d=price*0.1F;
			}
			return d;
		}
};
main(){
	Book b1(123,"JAVA","xyz",580);
	cout<<b1.getbookno()<<","<<b1.gettitle()<<","<<b1.getauthor()<<","<<b1.getprice()<<","<<b1.discount()<<endl;	
}
