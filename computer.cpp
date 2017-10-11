#include<iostream>
using namespace std;

struct computer
{
int yearofmanufacture;
double modelnumber;

};

int main()
{
    computer hp;
    hp.yearofmanufacture;
    hp.modelnumber;
    computer dell;
    dell.yearofmanufacture;
    dell.modelnumber;

    cout<<"Enter the year of manufacture for the hp laptop"<<endl;
    cin>>hp.yearofmanufacture;
    cout<<"Enter the model number for the laptop"<<endl;
    cin>>hp.modelnumber;

    cout<<"Enter the year of manufacture for the dell laptop"<<endl;
    cin>>dell.yearofmanufacture;
    cout<<"Enter the model number for the laptop"<<endl;
    cin>>dell.modelnumber;

    cout<<"Year of manufacture for hp is "<<hp.yearofmanufacture<<" model number is "<<hp.modelnumber<<endl;
    cout<<"Year of manufacture for dell is "<<dell.yearofmanufacture<<" model number is "<<dell.modelnumber<<endl;

    return 0;
}
