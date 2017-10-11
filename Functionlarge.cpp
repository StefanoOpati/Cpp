/*write a function that takes three values and returns the largest value. Uswe the function to write a program that
asks a user for three numbers and returns the largest number.*/
#include<iostream>
using namespace std;

int returnLargest(int k,int l,int j);

int main()
{
  int a,b,c,k;
  cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    cout<<"Enter c"<<endl;
    cin>>c;

  k= returnLargest(a,b,c);
  cout<<"Largest is :"<<k<<endl;

 return 0;
}

int returnLargest(int k,int l,int j)
{
    if((k>l)&&(k>j))
    {
       return k;
    }
    if((l>k)&&(l>j))
    {
      return l;
    }
    if((j>k)&&(j>l))
    {
        return j;
    }
}
