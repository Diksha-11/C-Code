#include<iostream>
using namespace std;
class dateinfo
{
    private:
     int dd;
     int mm;
     int yy;
    public:
     dateinfo()
     {
       dd=1;
       mm=1;
       yy=2020;
     }
     dateinfo (int a,int b,int c)
     {
        dd=a;
	 mm=b;
        yy=c;
     }
     dateinfo (dateinfo &o)
     {
        dd=o.dd;
        mm=o.mm;
        yy=o.yy;
     }
     void setdata (int p,int q, int r)
     {
       dd=p;
       mm=q;
       yy=r;
    }
    void getdata()
    {
      cout<<endl<<"Enter a year";
      cin>>yy;
      cout<<endl<<"Enter a month";
      cin>>mm;
      cout<<endl<<"Enter a date";
      cin>>dd;
   }
   void display()
   {
      cout<<endl<<"Year is:"<<yy;
      cout<<endl<<"month is:"<<mm;
      cout<<endl<<"date is:"<<dd;
  }
};

main()
{
  dateinfo z;
  z.setdata(1,1,2020);
  z.getdata();
  z.display();
}
     
