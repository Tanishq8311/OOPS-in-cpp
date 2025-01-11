// abstraction - hiding the implementation details from the user and only providing the necessary information to the user.

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
    void addAge(int n){
        if(age+n>0 && age+n<100)
            age += n;
        else
            cout<<"Invalid age"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    Customer c1("John", 5000,20);
    c1.deposit(100);
    c1.addAge(5);
    c1.display();
    return 0; 
}