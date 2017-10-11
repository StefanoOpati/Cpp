#include<iostream>
using namespace std;

int main()
{
    int money,a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    cout<<"Enter the amount in shillings"<<endl;
    cin>>money;
    a=money/1000;
    cout<<"1000 notes:"<<a<<endl;
    b=money%1000;
    c=b/500;
    cout<<"500 notes:"<<c<<endl;
    d=c%500;
    e=d/100;
    cout<<"100 notes:"<<d<<endl;
    f=e%100;
    g=f/50;
    cout<<"50 shilling notes:"<<g<<endl;
    h=g%50;
    i=h/20;
    cout<<"20 shillings coins:"<<i<<endl;
    j=i%20;
    k=j/10;
    cout<<"10 shillings coins:"<<k<<endl;
    l=k%10;
    m=i/1;
    cout<<"1 shilling coins:"<<m<<endl;
  /* cout<<"1000 notes:"<<money/1000<<endl;
   cout<<"500 notes:"<<money/500<<endl;
   cout<<"100 notes:"<<money/100<<endl;
   cout<<"50 notes:"<<money/50<<endl;
   cout<<"20 coins:"<<money/20<<endl;
   cout<<"10 coins:"<<money/10<<endl;
   cout<<"5 coins:"<<money/5<<endl;
   cout<<"1 coins:"<<money/1<<endl;
*/
}
