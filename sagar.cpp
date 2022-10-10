int main()
{
    Bank B[3];

    int num,found = 0, a, ch,i;
    
    
      cout<<" ******** WELCOME ********* !\n";
    
    

    do {
         
        cout << "\n\n1:Open an Account\n2:Account Information\n3:Deposit\n4:Withdraw\n5:Exit" << endl;
        cout<<" **********************************\n";

    
        cout << "Please input your choice: ";
        cin >> ch;
        cout<<"---------------------------------\n";

        switch (ch) {
            
            case 1://open new account
            cout<<" Enter number of account you want to create : \n";
               cin>>num;
               for (int i = 0; i < num; i++) {
                   B[i].OpenAccount();
                   
                   if(B[i].acno==B[i-1].acno){
                       cout<<" Account Number Exist!\n";
                   }
                   else{
                        cout << "Enter  Deposite amount: \n";
                     cin >> B[i].balance;
                       if(B[i].balance>=1000){
              
        
            
            cout<<" Your Account has been created with account number :"<<B[i].acno<<endl;
           
            
          
        }
        else
        cout<<" Sorry ! Account  not created  \n";
                   
               }
               }
                   break;
                 
        case 2: // searching the record
            cout << " Enter Account Number? \n";
            cin >> a;
            for (i = 0; i < num; i++) {
                found = B[i].Search(a);
                if (found)
               
                    break;
            }
            if (!found)
                cout << "Record Not Found \n" << endl;
            break;
            
        case 3: // deposit operation
            cout << "Account Number To Deposit Amount? \n";
            cin >> a;
            for (i = 0; i < num; i++) {
                found = B[i].Search(a);
                if (found) {
                    B[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found \n" << endl;
            break;
            
        case 4: // withdraw operation
            cout << "Account Number To Withdraw Amount? \n";
            cin >> a;
            for (i = 0; i < num; i++) {
                found = B[i].Search(a);
                if (found) {
                    B[i].Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found \n" << endl;
            break;
            
        case 5: // exit
            cout << " Thank You! Visit Again...\n" << endl;
            break;
        default:
            cout << "Wrong Option \n" << endl;
        }
    } while(ch!=5);
    return 0;
}
