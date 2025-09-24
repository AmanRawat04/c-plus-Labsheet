// Program to check a number is positive or negative
#include <iostream>
using namespace std ;
int main(){
    int num;
    cout<<"Enter the number : \n";
    cin>>num;
    if(num>=0){
        cout<<num<<"is positive\n";
    }
    else{
         cout<<num<<"is Negative\n";
    }
    return 0;
}