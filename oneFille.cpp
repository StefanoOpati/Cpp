#include<iostream>
using namespace std;
int main()
{
getEmployeeData();
computeGrossPay();
computeAndDeductFederalTaxes();
computeAndDeductLocalTaxes();
deductInsurancePremium();
printPaycheck();
return 0;
}
