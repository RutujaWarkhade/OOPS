/*
Define a class to represent a bank account which includes the following :
Implement the following program by using features of OOP in c++
a)Name of the deposite
b)Account Number
c)Withdrawal amount
d)Balance amount in the account member functions.
e)to assign initial value
f)to deposite
g)to display name and balance
*/



#include<iostream>
#include<cstring>
using namespace std;

class bank{
    public:
    int acc_no, wd_amt, dep_amt;
    string name;
    float balance;
    public:

    void enter_details(int x)
    {
        cout<<"The detail of Person : "<<x+1<<endl;
        cout<<"enter name of account holder = "<<endl;
        cin>>name;
        cout<<"enter account number = "<<endl;
        cin>>acc_no;
        cout<<"enter account balance = "<<endl;
        cin>>balance;
        
    }

    void display()
    {
        
        cout<<name<<"\t"<<acc_no<<"\t\t"<<balance<<endl;
    }

    void deposite()
    {
        cout<<"enter the amount which you want to deposite = "<<endl;
        cin>>dep_amt;
        balance = balance+dep_amt;
        cout<<"the deposited amount is = "<<dep_amt<<endl;
        cout<<"total balance after deposited amount is = "<<balance<<endl;
    }

    void withdrawal()
    {
        cout<<"enter the amount which you want to withdrawl = "<<endl;
        cin>>wd_amt;
        balance = balance-wd_amt;
        cout<<"the withdrawl amount is = "<<wd_amt<<endl;
        cout<<"total balance after withdrawl amount is = "<<balance<<endl;

    }


};


int main()
{
    bank b[40];
    int i, ch,n=0,N,t;
    string temp_name;
    int temp_acc_no, pos, flag=0;
    cout<<"enter the number of persons = "<<endl;
    cin>>N;
    do{
        cout<<"1.enter details\n2.display\n3.deposite amount\n4.Withdrawal amount\n"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            for(i=n;i<n+N;i++)
            {
                b[i].enter_details(i);
            }
            n=n+N;
            break;
            case 2:
            cout<<"name\taccount_no\tbalance"<<endl;
            for(i=0;i<n;i++)
            {
                b[i].display();

            }
            break;

            case 3:
            cout<<"enter the name of account holder for deposite amount = "<<endl;
            cin>>temp_name;
            cout<<"enter the account number of account holder for deposite amount = "<<endl;
            cin>>temp_acc_no;
            for(i=0;i<n;i++)
            {
                if(temp_name==b[i].name && temp_acc_no == b[i].acc_no)
                {
                    pos=i;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                b[pos].deposite();
            }
            else
            {
                cout<<"Account holder not found"<<endl;
            }
            break;

            case 4:
            cout<<"enter the name of account holder for withdrawl amount = "<<endl;
            cin>>temp_name;
            cout<<"enter the account number of account holder for withdrawl amount = "<<endl;
            cin>>temp_acc_no;
            for(i=0;i<n;i++)
            {
                if(temp_name==b[i].name && temp_acc_no == b[i].acc_no)
                {
                    pos=i;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                b[pos].withdrawal();
            }
            else
            {
                cout<<"Account holder not found"<<endl;
            }
            break;

            default:
            cout<<"wrong choice"<<endl;
        }
        cout<<"do you want continue press 1 = "<<endl;
        cin>>t;
    }while(t==1);
}