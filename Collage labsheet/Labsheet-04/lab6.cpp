// Program to assign grades  based on marks(if else ladder)
#include <iostream>
using namespace std;
int main()
{
    int marks;
    char Grade;
    cout << "Enter the marks : \n";
    cin >> marks;
    if (marks >= 90)
    {
        Grade = 'A';
    }
    else if (marks >= 80)
    {
        Grade = 'B';
    }
    else if (marks >= 70)
    {
        Grade = 'C';
    }
    else if (marks >= 60)
    {
        Grade = 'D';
    }
    else if (marks >= 50)
    {
        Grade = 'E';
    }
    else
    {
        Grade = 'F';
    }
    cout << "Grade:" << Grade << endl;
    return 0;
}