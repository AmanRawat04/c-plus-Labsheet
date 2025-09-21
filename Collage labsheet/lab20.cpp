//program with incorrect datatype usage of cin and cout
#include <iostream>
using namespace std;
int main(){
int age;
string Name;
cout<<"enter your age : ";
cin>>Name;
cout<<"enter the first letter of your name :";
cin>>age;
cout<<"letter :"<<age <<endl<<"age : "<<Name<<endl;  // logic is reversed, and types are mismatched
return 0;
}