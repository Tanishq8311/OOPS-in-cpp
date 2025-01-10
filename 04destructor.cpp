#include<bits/stdc++.h>
using namespace std;
int main(){
    // Destructor is a special member function that is called when an object is destroyed.
    // It is used to release resources that the object may have acquired during its lifetime.
    // It is called automatically when the object is destroyed.
    // It does not have a return type.
    // It has the same name as the class name but with a tilde(~) sign before it.
    // It cannot be overloaded or inherited.
    // It cannot have parameters.
    // It is called when the object goes out of scope or when the delete operator is used.
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
        ~Customer(){
            cout<<"Destructor called"<<endl;
        }
    };
    Customer c1("Tanishq",102,2000);
    return 0;
}

// jo constructor last me call hoga uska destructor pehle call hoga.
// Destructor is called when the object goes out of scope or when the delete operator is used.