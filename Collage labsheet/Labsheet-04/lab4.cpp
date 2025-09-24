// Program to find the largest of three numbers using nested if
#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the three numbers: \n";
    cin>>num1>>num2>>num3;
    if(num1>=num2){
        if(num1>=num3){
            cout<<num1<<"is the largest number.\n";
        }
        else{
            cout<<num3<<"is the largest number.\n";
        }
    } else{
        if(num2>=num3){
            cout<<num2<<"is the largest number\n";
        }
        else{
            cout<<num3<<"is the largest number.\n";
        }
    }
    return 0;
}
