//Accessing the values in the private object specifier
#include<iostream>

using namespace std;

class human{
private:
    int age;
public:
   void displayage(){
    cout<<"Steve is "<<age<<" years old."<<endl;
    }
 void setage(int value){
 age=value;
 }
} ;

int main()
{
    human steve;
    steve.setage(22);
    steve.displayage();

    return 0;
}
