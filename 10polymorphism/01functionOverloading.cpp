// polymorphism - many forms
// 1. Compile time polymorphism
// 2. Run time polymorphism

// 1. Compile time polymorphism
// a. Function overloading
// b. Operator overloading
// c. Template

// 2. Run time polymorphism
// a. Function overriding
// b. Virtual function

#include <iostream>
using namespace std;

class Area{
    public:
    int calculateArea(int r){
        return 3.14*r*r;
    }
    int calculateArea(int l, int b){
        return l*b;
    }
};

int main(){
    Area a1,a2;
    a1.calculateArea(5); //78
    a2.calculateArea(5,6); //30
    return 0;
}
