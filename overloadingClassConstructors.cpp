#include<iostream>
#include<string>

using namespace std;

class human{
private:
    int age;
    string name;

public:
    human()
    {
        cout<<"This is a default constructor"<<endl;
        age=0;
        name="noname";
    }
 human(string iname)
    {
        cout<<"This constructor takes name as the parameter"<<endl;
        age=0;
        name=iname;
    }
 human(int iage)
    {
        cout<<"This constructor takes age as the parameter"<<endl;
        age=iage;
        name="noname";
    }
    human(string iname, int iage)
    {
        cout<<"This constructor takes name and age as the parameter"<<endl;

        name=iname;
        age=iage;
    }

  void display(){
  cout<<name<<endl<<age<<endl;
   }
};

int main()
{
    human Pater;
    Pater.display();

   human Doreen;
   Doreen.display("Doreen");

   human Steve;
   Steve.display("Steve",22);

    return 0;
}
