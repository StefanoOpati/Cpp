#include<iostream>
 using namespace std;
 class Human{
 public:
     string name;

     void introduce()
     {
         cout<<"hi "<<name<<endl;
     }
 };
 int main()
 {
     Human *Steve = new Human();
     Steve->name="Steve";
     Steve->introduce();
     return 0;
 }
