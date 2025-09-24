//program to uisng wrong operator by adding two numbers by multiplication (logical error)
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    cout<<a*b<<endl; // answer : 49 error due to wrong operator
    cout<<a+b<<endl; //answer: 14 expected answer
}