//program to check the character is vovel or constant
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : \n";
    cin>>ch;
    if((ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z')){
        char lowerch = tolower(ch);
if(lowerch=='a'||lowerch=='e'||lowerch=='i'||lowerch=='o'||lowerch=='u'){
    cout<<ch<<"is a vovel.\n";
}
else {
    cout<<ch<<"is constant\n"; }
}
else{
    cout<<"Invalid input\n";
}
return 0;
    }
