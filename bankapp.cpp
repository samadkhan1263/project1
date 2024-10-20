#include <iostream>
using namespace std;
int main()
 {
     char op;
     double deposit, withdraw, amount=0;
     cout<<"Welcome to ASK Bank Ltd."<<endl;
     cout<<"1. Deposit Money "<<endl;
     cout<<"2. Withdraw Money "<<endl;
     cout<<"3. Exit "<<endl;
     
     
     do{
         cout<<"Enter option(1-3)"<<endl;
          cin>>op;
           
         switch (op) {
             
         case '1':
         cout<<"Enter the amount you want to deposit."<<endl;
         cin>>deposit;
         amount=amount + deposit;
         cout<<"Your current balance is: "<<amount<<endl;
         break;
         case '2':  
         cout<<"Enter the amount you want to withdraw."<<endl;
         cin>>withdraw;
         if(withdraw > amount)
         {
             cout<<"Sorry you have in sufficient balance. "<<endl;
         }
         else
         {
             amount=amount - withdraw;
             cout<<"Take your withdrawl."<<endl;
             cout<<"Your account has "<<amount<<endl;
         }
         break;
         case '3':
         cout<<"Good Bye. Thanks for visiting us"<<endl;
         break; 
        
         default:
         cout<<"Invalid.";
         break;
            }
          
         
    }        
            while(op!='3');
           


    return 0;
}
