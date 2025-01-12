// virtual function - a function that is declared in the base class and redefined in the derived class
// runtime polymorphism - the function call is resolved at runtime
// method overriding - a derived class provides a specific implementation of a method that is already provided by its base class

#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void speak(){ //runtime pe call hoga
        cout<<"Animal speaks"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Dog barks"<<endl;
    }
};

int main(){
    Animal *a1;
    a1= new Dog();  // upcasting
    a1->speak();    // animal speaks
    // Dog d1;
    // d1.speak();
    return 0;
}

// pure virtual function - a virtual function that is set to 0
// abstract class - a class that contains atleast one pure virtual function
// abstract class cannot be instantiated
// a derived class must override the pure virtual function to be instantiated
// class Animal{
//     public:
//     virtual void speak()=0;
// };
//
// class Dog : public Animal{
//     public:
//     void speak(){
//         cout<<"Dog barks"<<endl;
//     }
// };
//
// int main(){
//     Animal *a1;
//     a1= new Dog();  // upcasting
//     a1->speak();    // animal speaks
//     // Dog d1;
//     // d1.speak();
//     return 0;
// }