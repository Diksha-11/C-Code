#include <iostream>
using namespace std;

struct student{
	int rollno;
	char name[20];
};
struct studDetail{
	int addmissionno;
	char courserol[20];
};

main()
{
	struct student stu;
	struct studDetail sd;
	cout<<"Enter name of the student"<<endl;
	cin>>stu.name;
	cout<<"Enter the roll number of the student"<<endl;
	cin>>stu.rollno;
	cout<<"Enter the addmission number of the student"<<endl;
	cin>>sd.addmissionno;
	cout<<"Enter the course of the student"<<endl;
	cin>>sd.courserol;
	cout<<"\n\nSTUDENT DETAILS\n"<<endl;
	cout<<"Enter name of the student:- "<<stu.name<<endl;
	cout<<"Enter the roll number of the student:- "<<stu.rollno<<endl;
	cout<<"Enter the addmission number of the student:- "<<sd.addmissionno<<endl;
	cout<<"Enter the course of the student:- "<<sd.courserol<<endl;
	
}
