// multilevel inheritance - a derived class with only one base class and that base class is derived from another class

#include <iostream>
using namespace std;

class Person{
    protected:
    string name;

    public:
    void introduce(){
        cout<<"Hello my name is: "<<name<<endl;
    } 
};

class Employee : public Person{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"My monthly salary is: "<<salary<<endl;
    }
};

class Manager : public Employee{
    protected:
    int bonus;

    public:

    Manager(string name, int salary, int bonus){
        this->name = name;
        this->salary = salary;
        this->bonus = bonus;
    }
    void bonus_amount(){
        cout<<"My bonus amount is: "<<bonus<<endl;
    }
};

int main(){
    Manager m1("John", 50000, 10000);
    m1.introduce();
    m1.monthly_salary();
    m1.bonus_amount();
    // m1.bonus = 20 000; // bonus is protected member of Manager class
    return 0;
}