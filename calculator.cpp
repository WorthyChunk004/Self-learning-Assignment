#include<iostream>>
using namespace std;
class Calculator
{
    private:
        float num1, num2;
    public:
        void input()
        {
            cout<<"Enter first num: \n";
            cin>>num1;
            cout<<"Enter second num: \n";
            cin>>num2;
        }
        void add()
        {
            cout<<"Addition: "<<num1+num2<<endl;
        }
        void substract()
        {
            cout<<"Subtraction: "<<num1-num2<<endl;
        }
        void multiply()
        {
            cout<<"Multiplication: "<<num1*num2<<endl;
        }
        void divide()
        {
            if(num2!=0)
            {
                cout<<"Divison= "<<num1/num2<<endl;
            else    
                cout<<"Division not possible(divide by zero)"<<endl;
            }
        }
        void square()
        {
            cout<<"Square of first number: "<<num1*num1<<endl;
            cout<<"Square of second number: "<<num2*num2<<endl;
        }
};
int main()
{
    Calculator c;
    c.input();
    cout<<"\nCalculator Operations: \n";
    c.add();
    c.substract();
    c.multiply();
    c.divide();
    c.square();
    return 0;
}