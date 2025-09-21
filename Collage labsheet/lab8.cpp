//To swapping two variable by without tempoary variable
 #include <iostream>
using namespace std;
int main(){
 int a=1,b=56;
 a=a+b;
 b= a-b;
 a=a-b;
 cout<<"a="<<a<<endl<<"b="<<b; 
    return 0;
}