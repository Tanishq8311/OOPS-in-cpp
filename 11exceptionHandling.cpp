//  an exception is an unexpected problem that arises during the ezecution of a program and our program terminates abnormally with some errors/issues.
//  exception handling is a mechanism to handle runtime errors and maintain the normal flow of the program.
// try - block of code where an exception can occur
// catch - block of code that handles the exception
// throw - used to throw an exception

#include <iostream>
using namespace std;

class Customer{
    string name;
    int balance,account_number;
    public:
    Customer(string name, int balance, int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<"Amount deposited successfully"<<endl;
        }
        else{
            throw "Invalid amount";
        }
    }
    void withrdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<"Amount withdrawn successfully"<<endl;
        }
        else{
            throw "Invalid amount";
        }
    }
};

int main(){
    Customer c1("John", 5000, 101);
    try{
        c1.deposit(100);
        c1.withrdraw(6000);
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
}