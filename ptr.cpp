#include<iostream>
using namespace std;
void Increment(int *num)
{
    *num = *num + 1;
}
int main()
{
    int num = 5;
    int *ptr = &num;
    cout<<"Number before incrementing is: "<<num<<endl;
    Increment(ptr);
    cout<<"Number after incrementing is: "<<num<<endl;
    return 0;

}