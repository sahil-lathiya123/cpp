#include<iostream>
using namespace std;
class book
{
    private:
    int bookno;
    char booktitle[20];
    float price;
    float total_cost(int n)
    {
        return price*n;
    }

    public:
    void input()
    {
        cout<<"enter book number:";
        cin>>bookno;
        cout<<"enter book title:";
        cin>>booktitle;
        cout<<"enter book price:";
        cin>>price;
    }

    void purchase()
    {
        int n;          //n=number of books
        cout<<"enter number of books:";
        cin>>n;
        float totalcost;
        totalcost=total_cost(n);

        cout<<"total cost:"<<totalcost;
    }
};

int main()
{
    book b;
    b.input();
    b.purchase();
}