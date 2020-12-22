#include<iostream>
using namespace std;
class length
{
  private:
    int m,cm;
  public:
    length()
    {
       m=0;
       cm=0;
    }
    length(int a,int b)
    {
       m=a;
       cm=b;
    }
    length( length &a)
    {
      m=a.m;
      cm=a.cm;
    }
    void getdata()
    {
      cout<<endl<<"Enter the length in meter ";
      cin>>m;
      cout<<endl<<"Enter the length in the centimeter";
      cin>>cm;
    }
    void display()
    {
       cout<<endl<<"Length is in meter "<<m;
       cout<<endl<<"Length is in centimeters "<<cm;
    }
};
main()
{
  length j;
  j.getdata();
  j.display();
}
  
    
    
