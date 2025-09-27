//Program to check eligibity of age to give vote
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age : \n";
    cin>>age;
    if(age>=18){
        cout<<"Eligible to give vote\n";
    }
    else{
        cout<<"Not eligible to vote\n";
    }
    return 0;
}