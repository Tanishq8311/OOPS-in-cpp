#include<bits/stdc++.h>
using namespace std;

// Class is a user defined data type which holds its own data members and member functions, which can be accessed and used by creating an instance of that class.
class Student{
public:
    string name;
    int age,roll_number;
    string grade;
};

int main()
{
    // object - An object is an instance of a class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
    // Student s1; // s1 is an object of class Student
    // s1.name = "Tanishq";
    // s1.age = 20;    
    // s1.roll_number = 101;
    // s1.grade = "A+";
    // cout<<"Name: "<<s1.name<<endl;
    // cout<<"Age: "<<s1.age<<endl;
    // cout<<"Roll Number: "<<s1.roll_number<<endl;
    // cout<<"Grade: "<<s1.grade<<endl;
    Student *S = new Student;   // S is a pointer to an object of class Student
    S->name = "Tanishq";
    S->age = 20;
    S->roll_number = 101;
    S->grade = "A+";
    cout<<"Name: "<<S->name<<endl;
    cout<<"Age: "<<S->age<<endl;
    cout<<"Roll Number: "<<S->roll_number<<endl;
    cout<<"Grade: "<<S->grade<<endl; 
    return 0;
}