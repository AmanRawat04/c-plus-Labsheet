// Program to find the valid triangle
#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter the side of triangles : \n";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "The triangle is valid\n";
    }
    else
    {
        cout << "Triangle is not valid\n";
    }
    return 0;
}