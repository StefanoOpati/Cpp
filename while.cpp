#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    int number;
    int total = 0;

    while (num <= 5) {
        cout<<"Enter the number"<<endl;
        cin >> number;
        total += number;
        num++;
    }
    cout <<"Total is:"<< total << endl;

    return 0;
}
