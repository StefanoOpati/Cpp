#include<iostream>
#include<string>

using namespace std;
 class human{
 public:
     string name;
     void introduce();
 };

 void human :: introduce()
 {
 cout<<"I am Opati "<< human :: name<< endl;
 }
 int main()
 {
     human steve;
     steve.name="Steve";
     steve.introduce();

     return 0;
 }
