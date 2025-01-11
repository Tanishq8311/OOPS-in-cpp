// encapsulation - wrapping up of data and functions into a single unit , while preventing access to the data from outside the unit

#include <iostream>
using namespace std;

class Customer{
    private:
    string name;
    int balance;
    int age;
    public:
    Customer(string name,int balance,int age){
        this->name = name;
        this->balance = balance;
        this->age = age;
    }
    void deposit(int amount){
        if(amount>0)
            balance += amount;
        else{
            cout<<"Invalid amount"<<endl;
        }
    }
};

int main(){
    Customer c1("John", 5000,20);
    c1.deposit(100);
    c1.deposit(-100);
    return 0; 
}