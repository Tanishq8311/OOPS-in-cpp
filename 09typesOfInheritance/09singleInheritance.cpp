// single inheritance - a derived class with only one base class
#include <iostream>
using namespace std;
class Human{
    protected:
    string name;
    int age;

    public:
    void work(){
        cout<<"Human is working"<<endl;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student : public Human{

    int roll_no,fees;
    public:
    Student(string name, int age, int roll_no, int fees){
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll no: "<<roll_no<<endl;
        cout<<"Fees: "<<fees<<endl;
    }
};

int main(){
    Student s1("John", 20, 101, 5000);
    // cout<<s1.name<<endl;
    // cout<<s1.age<<endl;
    s1.work();
    s1.display();
    return 0;

}