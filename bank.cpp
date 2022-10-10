#include <iostream>
using namespace std;


// class
class Bank {
public:
    
    char name[30],address[30];
    long balance;
    int age;
    long acno;

public:
    void OpenAccount();
   
    void ShowAccount()
    {
      cout<<"\n\n\t ********** Displaying Account Details ********** \n\n"<<" ";
       cout<<"\n\tAcc_No"<<"\tName"<<"\tAddress"<<"\tAge"<<"\tBalance";
       cout<<"\n-------------------------------------------------------\n";
        cout << "\n\t" << acno<<"\t"<< name;
        cout << "\t" << address <<"\t"<< age ;
        cout << "\t" << balance <<endl;
        cout<<"-------------------------------------------------\n";
    }
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U want to deposit? \n";
        cin >> amt;
        balance = balance + amt;
        cout<<" Your Account has been credited with amount :"<<amt<<endl;
        cout<<" Current balance is "<<balance<<endl;
    }
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? \n";
        cin >> amt;
        if (amt <= balance ){
            balance = balance - amt;
            cout<<" Your Account has been debited with amount :"<<amt<<endl;
        cout<<" Current balance is "<<balance<<endl;
        }
        else
            cout << "Less Balance..." << endl;
    }
    int Search(int);
};

void Bank :: OpenAccount()
    {
        cout << "Enter Account Holder Name:\n ";
        cin >> name;
        
        cout << "Enter Address: \n";
        cin >> address;
        
        cout << "Enter Age: \n";
        cin >> age;
        
        cout<<" Enter account number :\n";
        cin>>acno;
    }
        

int Bank::Search(int a)
{
    if (acno == a) {
        ShowAccount();
        return (1);
    }
    return 0;
}


