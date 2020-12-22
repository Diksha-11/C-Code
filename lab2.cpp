#include <iostream>
using namespace std;
union car{
	int crno;
	char nam[20];
};
struct car2{
	char name[20];
	int mil;
};
int main()
{
	union car stu;
	struct car2 c;
	cout<<"Enter the number of the car"<<endl;
	cin>>stu.crno;
	cout<<"Car No:- "<<stu.crno<<endl;
	cout<<"\nEnter the colour of the car"<<endl;
	cin>>stu.nam;
	cout<<"Car Colour:- "<<stu.nam<<endl;
	cout<<"\nCAR DETAILS"<<endl;
	cout<<"Car No. :- "<<stu.crno<<" (It gets update to garbage value)"<<endl;
	cout<<"Car colour :-"<<stu.nam<<endl;
	
	cout<<"\nEnter name of the car2"<<endl;
	cin>>c.name;
	cout<<"Enter milage of the car2"<<endl;
	cin>>c.mil;
	cout<<"\nCAR2 DETAILS:-"<<endl;
	cout<<"Name of the Car:- "<<c.name<<" (It doesnt get updated)"<<endl;
	cout<<"Milage of the car:- "<<c.mil<<endl;
	
	cout<<"\nTO CHECK THE PRINCIPLE OF UNION AND STRUCTURE:- "<<endl;
	cout<<"Size of union is:- "<<sizeof(stu)<<" (largest size element in car union)"<<endl;
	cout<<"Size of structur is:-"<<sizeof(c)<<" (sum of all the element's sizes in car2 structure)"<<endl;
}
