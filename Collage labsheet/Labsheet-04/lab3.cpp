// Program to find the largest of two numbers
#include <iostream>
using namespace std ;
int main(){
int num1,num2;
cout<<"Enter the two numbers\n";
cin>>num1>>num2;
if(num1>num2){
    cout<<num1<<"is largest.\n";
}
else{
    cout<<num2<<"is largest.\n";
}
return 0;
}