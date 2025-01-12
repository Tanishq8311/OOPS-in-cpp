// operator overloading - same operator, different operands

#include <iostream>
using namespace std;

class Complex{
    int real,imag;
    public:
    Complex(int r=0,int i=0){
        real = r;
        imag = i;
    }

    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    // Complex operator +(Complex c){
    Complex operator +(Complex& c){
        Complex ans;
        ans.real=real+c.real;
        ans.imag=imag+c.imag;
        return ans;
    }
};

int main(){
    Complex c1(2,3),c2(3,4);
    c1.display();
    c2.display();
    Complex c3=c1+c2;
    c3.display();
}
