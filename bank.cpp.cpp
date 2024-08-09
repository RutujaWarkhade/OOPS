#include<iostream>
using namespace std;

class bank
{
    private:
        int w, d, amount;
        string name;
    public:
        int acc_no;
        
        void get_value()
        {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter your account number: ";
            cin >> acc_no;
            cout << "Enter your amount in bank: ";
            cin >> amount;
        }
        
        void withdraw_amount()
        {
            cout << "Enter the amount you want to withdraw: ";
            cin >> w;
            if (w <= amount)
            {
                amount -= w;
                cout << "Total amount is " << amount << endl;
            }
            else
            {
                cout << "Insufficient balance!" << endl;
            }
        }
        
        void deposit()
        {
            cout << "Enter the amount you want to deposit: ";
            cin >> d;
            amount += d;
            cout << "Total deposited amount is " << amount << endl;
        }
        
        void display()
        {
            cout << name << "\t" << acc_no << "\t" << amount << endl;
        }
};

int main()
{
    int ch, t, n, temp, flag = 0, pos, i;
    bank object[10];
    cout << "Enter how many times you want to enter details";
    cin >> n;

    do
    {
        cout << "1. Get value\n2. Withdraw\n3. Deposit\n4. Display" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                for (i = 0; i < n; i++)
                {
                    object[i].get_value();
                }
                break;

            case 2:
                cout << "Enter the account number to withdraw from: ";
                cin >> temp;
                for (i = 0; i < n; i++)
                {
                    if (temp == object[i].acc_no)
                    {
                        pos = i;
                        flag = 1;
                        break;
                    }
                }
                if (flag==1)
                {
                    object[pos].withdraw_amount();
                }
                else
                {
                    cout << "Account not found" << endl;
                }
                flag = 0;
                break;

            case 3:
                cout << "Enter the account number to deposit into: ";
                cin >> temp;
                for (i = 0; i < n; i++)
                {
                    if (temp == object[i].acc_no)
                    {
                        pos = i;
                        flag = 1;
                        break;
                    }
                }
                if (flag==1)
                {
                    object[pos].deposit();
                }
                else
                {
                    cout << "Account not found" << endl;
                }
                flag = 0;
                break;

            case 4:
                cout << "Name\tAcc_No\tTotal Amount" << endl;
                for (i = 0; i < n; i++)
                {
                    object[i].display();
                }
                break;

            default:
                cout << "Wrong choice" << endl;
                break;
        }
        cout << "If you want to continue, press 1: ";
        cin >> t;
    } while (t == 1);

    return 0;
}
