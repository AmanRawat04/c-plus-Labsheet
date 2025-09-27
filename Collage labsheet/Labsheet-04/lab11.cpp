//Program to check whether  a charater is uppercase,lowercase,digit or special character
#include <iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter the Character :\n";
cin>>ch;
if(ch>='A'&&ch<='Z'){
    cout<<"The character is Uppercase.\n";

}
else if(ch>='a'&&ch<='z'){
    cout<<"The Character is Lowercase\n";
}
else if (ch>='0' && ch<='9'){
    cout<<"The Character is Digit \n";
}
else{
cout<<"The Character is Special Character\n";
}
return 0; 
}