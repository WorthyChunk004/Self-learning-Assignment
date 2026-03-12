#include<iostream>
using namespace std;
int main()
{
    int choice;
    float balance=1000, amt;
    do{
        cout<<"\n----------BANK MENU ---------\n";
        cout<<"1. Check Balance\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Current Balance: "<<balance<<endl;
                break;
            case 2:
                cout<<"Enter Amount to deposit: ";
                cin>>amt;
                balance = balance+amt;
                cout<<"Amount Deposited!";
                break;
            case 3:
                cout<<"Enter Amount to withdraw: ";
                cin>>amt;
                if(amt<=balance)
                {
                    balance = balance - amt;
                    cout<<"Amount withdrawn\n";
                }
                else
                {
                    cout<<"Insufficient Balance!!\n";
                }
                break;
            case 4:
                cout<<"Exit Program\n";
                break;
            default:
                cout<<"Invalid Choice\n";
        }
        }while(choice!=4);
    return 0;
}