#include<iostream>
#include<string>
using namespace std;
void formLetter();
int main()
{
//void formLetter();
string lastName, salesRep;
cout << "Enter name of family ";
cin >> lastName;
cout << "Enter name of sales representative ";
cin >> salesRep;
cout << endl << "Dear " << lastName <<
" Family:" << endl;
formLetter();
cout << "Sincerely," << endl << salesRep << endl;
return 0;
}
void formLetter()
{
cout << " Thank you for your interest in our " <<
"vacation resort. " << endl <<
"Enclosed is a color brochure featuring our " <<
"beautiful time-" << endl <<
"share units. I will be in contact in a few " <<
"days to see " << endl <<
"whether you have any questions." << endl;
}
