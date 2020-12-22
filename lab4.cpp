#include<iostream>
using namespace std;
class bedminton{
     private:
       int tannis_Racket=500,tabletannis_Racket=650,Squash_Racket=1200;
     public:
        void setdata(int t,int tb,int s){
           tannis_Racket=t;tabletannis_Racket=tb;Squash_Racket=s;}
       void displayy() {
        cout<<"Price of Tannis Racket is:- "<<tannis_Racket<<endl;
        cout<<"Price of Table-Tannis Racket is:- "<<tabletannis_Racket<<endl;
        cout<<"Price of Squash Racket is:- "<<Squash_Racket<<"\n\n";
       }};
       
 class bat{
     private:
       int Flick_Bat=500, Deriveshot_Bat=650,Sweep_Bat=1200;
     public:
        void setdata(int t,int tb,int s){
           Flick_Bat =t;Deriveshot_Bat=tb;Sweep_Bat=s;}
       void displaydata() {
        cout<<"Price of Flick Bat is:- "<<Flick_Bat<<endl;
        cout<<"Price of Derive shot bat is:- "<<Deriveshot_Bat<<endl;
        cout<<"Price of Sweep bat is:- "<<Sweep_Bat<<"\n\n";
       }};      
       
class Tannis_Racket{
   private:
     int large=73,regular=60,small=55;
     public:
     void setdata(int l,int r ,int s){
        large=l;regular=r;small=s;}
       void display(){
          cout<<"\t\tTHERE ARE THREE DIFFERENT SIZES OF TANNIS RACKETS"<<endl;
          cout<<"Length of large Tannis Racket(in cm) is :- "<<large<<endl;
          cout<<"Length of regular Racket(in cm) is :- "<<regular<<endl;
          cout<<"Length of small Racket (in cm) is :-\n\n\n "<<small<<endl; }};
          
int main(){
    Tannis_Racket t;
    bedminton bm;
    bat b;
    bm.displayy();
	t.display();
	b.displaydata();}
