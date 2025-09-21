// To swap two variable using temparory variable
 #include <iostream>
using namespace std;
int main(){
  int a=20,b=68,temp;
  cout<<"before swapping:\n";
  cout<<"a:"<<a<<endl;
  cout<<"b:"<<b<<endl;
  temp = a;
  a = b;
  b = temp;
  cout<<"After swapping\n";
  cout<<"a:"<<a<<endl;
  cout<<"b:"<<b<<endl; 
  cout<<"temp:"<<temp<<endl;
    return 0;
}