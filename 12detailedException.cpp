#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    try{
    if(b==0){
        throw "Division by zero is not possible";
    }
    int c=a/b;
    cout<<c<<endl;
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
}