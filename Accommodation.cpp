#include<iostream>
using namespace std;

int main()
{
    int no_meals,rates,n;
    do{
    cout<<"Enter the number of meals"<<endl;
    cin>>no_meals;
    if(no_meals==0)
    {rates=300;
    }else if(no_meals==1)
    {
        rates=450;
    }else if(no_meals==2)
    {
        rates=520;
    }else
    {
        rates =590;
    }
    cout<<"Semester room rate is:"<<rates<<endl;
    }while(n=1);
    cout<<"Press 1 to continue"<<endl;
    cin>>n;
return 0;
}
