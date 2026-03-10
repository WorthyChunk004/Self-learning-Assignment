#include<iostream>
using namespace std;
class Book
{
    private:
        int bookId;
        char title[20];
        char author[10];
        int price;
    public:
        void setdata();
        void displaydata();
};
void Book::setdata()
{   
    cout<<"BookId: "<<endl;
    cin>>bookId;
    cout<<"Title: "<<endl;
    cin>>title;
    cout<<"Author: "<<endl;
    cin>>author;
    cout<<"Price: "<<endl;
    cin>>price;
}
void Book::displaydata()
{
    cout<<"Book Id: "<<bookId<<endl;
    cout<<"Title: "<<title<<endl;;
    cout<<"Author: "<<author<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"---------------------";
}
int main()
{
    Book b[4];
    cout<<"Enter Book Details: \n";
    for(int i=0;i<4;i++)
    {
        cout<<"\nBook"<<i+1<<endl;
        b[i].setdata();
    }
    cout<<"\nBook Information\n";
    for(int i=0;i<4;i++)
    {
        b[i].displaydata();
    }
    return 0;
}