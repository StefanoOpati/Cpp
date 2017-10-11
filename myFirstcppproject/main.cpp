#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
    double radius;

    circle mycircle;
cout<<"Enter the radius"<<endl;
cin>>radius;
    cout<<"The area of the circle is:"<<mycircle.area(radius);
    return 0;
}
