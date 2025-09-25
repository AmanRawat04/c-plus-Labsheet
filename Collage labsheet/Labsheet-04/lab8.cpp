// program to check the number is divisible by 5 and 11
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : \n";
    cin>>num;
    if(num%5==0 && num%11==0){
        cout<<num<<"is divisible by both 5 and 11.\n";
    }
    else{
        cout<<num<<"is not divisible by 5 and 11. \n";
    }
    return 0;
}