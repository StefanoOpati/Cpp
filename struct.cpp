#include <iostream>
using namespace std;

struct Employee
{
    int idNumber;
    double hourlySalary;
};
int main()
{
    Employee oneStaffMember;
    oneStaffMember.idNumber = 1245;
    oneStaffMember.hourlySalary = 64827.25;

    cout<<"The employee id number is "<<oneStaffMember.idNumber<<endl;
    cout<<"The employee hourly salary is "<<oneStaffMember.hourlySalary<<endl;

    return 0;
}
