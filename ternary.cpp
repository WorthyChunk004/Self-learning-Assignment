#include<iostream>
using namespace std;
int main()
{
    int a, b, max;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    max = (a>b) ? a:b;
    cout<<"Max num is: "<<max;
    return 0;

}