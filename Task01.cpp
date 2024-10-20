#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    char Operator;
    cout<<"Enter The Number 1";
    cin>>num1;
    cout<<"Enter The Number 2";
    cin>>num2;
    cout<<"Enter The Operator(+,-,*,/)= ";
    cin>>Operator;
    if
    (Operator== '+')
   { int add = num1 + num2;
    cout<<"The sum is:"<< add;
    }
    else if 
   (Operator=='-')
  { int sub= num1- num2 ;
    cout<<"The sub is :"<<sub;
    }
    else if 
        (Operator =='*')
      { int prod = num1*num2;
    cout<<"The prod is :"<<prod;
    }
    else if (Operator =='/') {
    int div = num1 / num2;
    cout<<"The div is :"<<div;
    }
    else 
    cout<<"Values are incorrect";
    
    
 return 0;
}





    
















