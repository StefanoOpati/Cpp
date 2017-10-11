#include<math.h>
#include<iostream>
using namespace std;
#define pie 3.14

int main()
{
   double radius;
   cout<<"Enter the radius"<<endl;
   cin>>radius;
   //cout<<"The area is:"<<(pie*radius*radius);
   cout<<"The area is:"<<(pie*pow(radius,2));

   return 0;
}
