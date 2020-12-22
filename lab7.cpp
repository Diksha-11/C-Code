#include<iostream>
using namespace std;
class base
{
     public:
     int n1,n2;
     void show()
     {
        cout<<"\nFirst number is = "<<n1;
		cout<<"\nSecond number is = "<<n2<<"\n\n";}
};
class derive : public base
{
     public:
     int n2=22;
     void show()
     {
         cout<<"\nFirst Number of derived class is = "<<n1;
         cout<<"\nSecond Number of derived class is = "<<n2;          
     }
};
int main()
{
    base b;
    base *bptr;      
    cout<<"Pointer of base class points to it";
    bptr=&b;          
    bptr->n1=44;              //access base class via base pointer
    bptr->show();
    derive d;
    derive *dptr;
    cout<<"Base class Pointer access derive class"<<endl;
    bptr=&d;          
    bptr->n1=66; 
	bptr->n2=22;             
    bptr->show();     
    return 0;
}

