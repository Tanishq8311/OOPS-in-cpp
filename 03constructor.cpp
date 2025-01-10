#include <bits/stdc++.h>
using namespace std;
// constructor is a special member function that is called when an object is created.
// It is used to initialize the object of a class.
// It is called automatically when the object is created.
// doesnot have a return type.
// name of the constructor is same as the class name.

class Customer{
    public:
    string name;
    int number;
    int balance;
    Customer(){
        cout<<"Constructor called"<<endl; //default constructor
    }
    Customer(string n,int num,int bal){ //parameterized constructor
        name = n;
        number = num;
        balance = bal;
        // this keyword is a pointer which refers to the current object.
        // this->name = n;
    }

    Customer(Customer &c){ //copy constructor
        name = c.name;
        number = c.number;
        balance = c.balance;
    }
};
int main(){
    // Customer c1;
    // c1.name = "Rahul";
    // c1.number = 101;
    // c1.balance = 1000;
    // cout<<c1.name<<endl;
    // cout<<c1.number<<endl;
    // cout<<c1.balance<<endl;

    Customer c2("Tanishq",102,2000);
    // cout<<c2.name<<endl;
    // cout<<c2.number<<endl;
    // cout<<c2.balance<<endl;

    Customer c3(c2);
    cout<<c3.name<<endl;
    cout<<c3.number<<endl;
    cout<<c3.balance<<endl;
    return 0;
}