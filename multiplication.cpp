#include<iostream>
using namespace std;

int multiplicationTable(int k )
{
   int product;
    for(int j=2;j<=10;j++)
    {
     product=k*j;
     cout<<"product= "<<product<<endl;
    }
    //cout<<"The product is "<<product<<endl;
    return product;
}
int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    multiplicationTable(num);
}
