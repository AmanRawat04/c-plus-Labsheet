//Program to check a number is Even or Odd
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : \n";
    cin>>num;
    if(num%2==0){
        cout<<num<<"is even.\n";
    }
    else{
        cout<<num<<"is odd.\n";
    }
    return 0;
}