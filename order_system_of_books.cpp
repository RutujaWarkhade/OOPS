/*
The book shop maintain the inventory of books that are being sold at the shop. The 
list includes details such as author, title , price, publisher, and stock position. 
Whenever a customer want a book, the sales person input the title and author and the system 
searchs the list and appropriate message is displayed. If it is then the system displayed book
 details and request for number of copies required. If the requested copies is 
displayed otherwise msg is displayed; otherwise msg required copies not in stock is displayed.
 Design a system using a class called books with suitable memebrs
functions and construtors. Use new operator in constructor to allocate memory space reqired. 
Implement c++ program.
*/

#include<iostream>
#include<cstring>
using namespace std;
class book{
    private:
    string name, author, publication;
    int stock;
    float price;
    public:
    book()
    {
        string *name=new string;
        string *author=new string;
        string *publication=new string;
        int *stock=new int;
        float *price=new float;
    }
    void enter()
    {

        cout<<"enter name of book="<<endl;
        cin>>name;
        cout<<"enter author of book="<<endl;
        cin>>author;
        cout<<"enter publication of book="<<endl;
        cin>>publication;
        cout<<"enter price of book="<<endl;
        cin>>price;
        cout<<"enter stock of book="<<endl;
        cin>>stock;      
    }
    void display()
    {
        cout<<name<<"\t"<<author<<"\t"<<publication<<"\t\t"<<price<<"\t"<<stock<<endl;
    }
    void search(book b[20], int n)
    {
        string temp_name, temp_author;
        int flag=0, temp_stock;
        cout<<"enter book name which you want to search"<<endl;
        cin>>temp_name;
        cout<<"enter book author which you want to search"<<endl;
        cin>>temp_author;
        for(int i=0; i<n; i++)
        {
            if(temp_name==b[i].name && temp_author==b[i].author)
            {
                flag=1;
                cout<<"Book is available"<<endl;
                cout<<"\nPrice of book is="<<b[i].price<<endl;
                cout<<"stock available of book is="<<b[i].stock<<endl;
                cout<<"enter how many books you want to order="<<endl;
                cin>>temp_stock;

                if(temp_stock<=b[i].stock)
            {
                cout<<"stock is available"<<endl;
                cout<<"Total price of books is="<<temp_stock*b[i].price<<endl;
                b[i].stock=b[i].stock-temp_stock;
            }
            else{
                cout<<"stock is not available"<<endl;
            }

        }
        if(flag==0)
        {
            cout<<"Book is not available"<<endl;
        }
        
    }
    }
};

int main()
{
    book b[20];
    int i,t,ch,N,n=0;
    do{
        cout<<"1.enter details\n2.display\n3.search"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"enter number of books="<<endl;
            cin>>N;
            for(int i=0;i<n+N;i++)
            {
                b[i].enter();
            }
            n=n+N;  
            break;
            case 2:
            cout<<"name\tauthor\tpublication\tprice\tstock"<<endl;
            for(int i=0;i<n;i++)
            {
                b[i].display();
            }
            break;
            case 3:
            b[i].search(b, n);
            break;
            default:
            cout<<"wrong choice"<<endl;
            break;
        }
        cout<<"do you want to continue if yes(press 1)="<<endl;
        cin>>t;
    }while(t==1);
    return 0;
}