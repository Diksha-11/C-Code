#include<iostream>
using namespace std;
class book
{
	private:
		char name[20];
		float price;
	protected:
		int pages;
	public:
		void getdata()
		{
			cout<<"Enter the name of the book"<<endl;
			cin>>name;
			cout<<"Enter price of the book"<<endl;
			cin>>price;
			cout<<"Enter the no. of pages"<<endl;
			cin>>pages;
		}
		void display()
		{
			cout<<"\n\nBOOK:- \n";
			cout<<"name:- "<<name<<endl;
			cout<<"Price:- "<<price<<endl;
			cout<<"Pages:- "<<pages<<endl;
		}
		void content();
		void gift()
		{
			if(price>300){
				cout<<"CONGRATS!, You won a coupon"<<endl;
			}
		}
};
void book::content(){
		cout<<"Thanks For Shoppping!"<<endl;
}
main()
{
	book b;
	b.getdata();
	b.display();
	b.gift();
	b.content();
}
