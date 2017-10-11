#include <iostream>
using namespace std;

int main()
{
int myArr[5];
int x = 42;
for(int y = 0;y<5; ++y)
{
    cout<<myArr[x]<<endl;
    myArr[x] = x+=2;

}
//cout<<myArr[x]<<endl;
return 0;
}
