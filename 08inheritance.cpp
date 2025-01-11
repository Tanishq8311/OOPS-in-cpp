// inheritance - the ability of a class to derive properties and characteristics from another class.
// Derived class (child) - the class that inherits from another class
// Base class (parent) - the class that is inherited from
// Syntax:
// class derived_class :: visibility-mode base_class
#include <iostream>
using namespace std;
// private > protected > public 
class Human{
    public:
    string name;
    int age,weight;
};

class Student : public Human{
    int roll_no;
    int marks;

};
int main(){
    Student s1;
    s1.name = "John";
    cout<<s1.name<<endl;
    return 0;
}

// Visibility modes:
// public - public members of the base class become public members of the derived class
// protected - protected members of the base class become protected members of the derived class
// private - public and protected members of the base class become private members of the derived class
// Note: private members of the base class are not accessible in the derived class
// Note: visibility mode is optional. If not specified, it is private by default
// Note: visibility mode can be changed using the access specifiers
// Note: visibility mode can be changed multiple times in the derived class
