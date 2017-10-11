/*write a function that takes three values and returns the largest value. Uswe the function to write a program that
asks a user for three numbers and returns the largest number.*/
#include<iostream>
using namespace std;

int returnLargest();

int main()
{
  int k;
  k= returnLargest();
  cout<<"Largest is :"<<k<<endl;
  return 0;
}

int returnLargest()
{
    int a,b,c;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    cout<<"Enter c"<<endl;
    cin>>c;

    if((a>b)&&(a>c))
    {
       return a;
    }
    if((b>a)&&(b>c))
    {
      return b;
    }
    if((c>a)&&(c>b))
    {
        return c;
    }


}
