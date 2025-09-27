// program to find  the absolute value
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number : \n";
    cin >> a;
    if (a < 0)
    
        a = -a;
        cout << "Absolute value : " << a<< endl;
    
    return 0;
}