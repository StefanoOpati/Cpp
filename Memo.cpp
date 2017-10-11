#include<iostream>
#include<string>
using namespace std;

string companyName()
{
   string name="C++ Software Developers";
   return name;
}
int main()
{
    cout<<"TO ALL OUR ESTEEMED CUSTOMERS,"<<endl<<"We wish to inform you that the meeting"<<endl<<
    "which was planned by the board of management, "; cout<<companyName()<< " company has been rescheduled"<<endl<<
    "till further notice due to unavoidable circumstances that the "; cout<<companyName()<< " has been experiencing"<<endl<<
    "of late."<<endl<<" Please bear with us as we work tirelessly to sort out the mess."<<endl<<
    "Yours sincerely,"<<endl<<"Stephen Opati,"<<endl<<"C.E.O, "<<endl; cout<<companyName()<<" company."<<endl;
}
