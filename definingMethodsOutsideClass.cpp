#include<iostream>
#include<string>

using namespace std;

class human
{
public:
    string name;
    void introduce();

};
void human :: introduce(){
cout <<"My name is "<<human :: name<<endl;
}

int main()
{
    human Opati;
    Opati.name ="Opati";
    Opati.introduce();

    return 0;
}
