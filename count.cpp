#include <iostream>
using namespace std;

int main() 
{
    int num, count = 0;
    cout << "Enter numbers: ";
    cin >> num;

    if (num == 0) 
    {
        count = 1;
    } 
    else 
    {
        while (num != 0) 
        {
            num = num / 10;
            count++;
        }
    }
    cout << "Number of Digits: " << count << endl; 
    return 0;
}
