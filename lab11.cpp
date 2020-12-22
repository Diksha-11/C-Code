#include<iostream>
using namespace std;
class design
{
  private:
     int empno,dob;
     float salary;
     char name[10];
  public:
     void setdata(int a,float b,int c,char d[10])
     {
        empno=a;
        salary=b;
        dob=c;
        name[10]=d[10];
     }
     void getdata()
     {
        cout<<"Enter the name of employee"<<endl;
        cin>>name;
        cout<<"Enter the salary"<<endl;
        cin>>salary;
        cout<<"Enter the employee number"<<endl;
        cin>>empno;
        cout<<"Enter the date of birth of employee"<<endl;
        cin>>dob;
     }
     void display()
     {
       cout<<endl<<"Employee Details# ";
       cout<<endl<<"Employee name: "<<name[10];
       cout<<endl<<"Employee salary:- "<<salary;
       cout<<endl<<"Employee number:- "<<empno;
       cout<<endl<<"Employee date of birth :- "<<dob;
     }
};
main()
{
   design w;
   w.getdata();
   w.display();
}
        
