// static data member
// static data member is shared by all objects of the class
// static data member is initialized only once
// static data member is accessed using class name 
// only one copy of static data member is created and shared by all objects of the class
#include <iostream>
using namespace std;

// to store the count of objects created
class Customer{
    public:
    string name;
    int acc_number;
    int balance;
    static int count; // static data member

    Customer(string name, int acc_number, int balance){
        this->name = name;
        this->acc_number = acc_number;
        this->balance = balance;
        count++;
    }
};
int Customer::count = 0; // initialization of static data member

int main(){
    Customer c1("John", 101, 5000);
    Customer c2("Doe", 102, 6000);
    Customer c3("Jane", 103, 7000);
    Customer c4("Jane", 103, 7000);

    cout << "Total number of customers: " << Customer::count << endl;  //5
    return 0;
}

