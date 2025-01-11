// hierarchical inheritance - a derived class with more than one base class but only one base class at a time
// multiple inheritance - a derived class with more than one base class

#include <iostream>
using namespace std;

class Engineer{

    public:
    string specialization;

    void work(){
        cout<<"Engineer is working"<<endl;
    }
};

class Youtuber{

    public:
    int subscribers;

    void makeVideo(){
        cout<<"Youtuber is making video"<<endl;
    }
};

// class Teacher : public Engineer, public Youtuber{

//     public:
//     string subject;

//     Teacher(string specialization, int subscribers, string subject){
//         this->specialization = specialization;
//         this->subscribers = subscribers;
//         this->subject = subject;
//     }
//     void showcase(){
//         cout<<subject<<endl;
//         work();
//         makeVideo();
//     }
//     void teach(){
//         cout<<"Teacher is teaching"<<endl;
//     }
// };

class Teacher : public Engineer{
    int salary;
    public:
    Teacher(string specialization, int salary){
        this->specialization = specialization;
        this->salary = salary;
    }
    void display(){
        cout<<"Specialization: "<<specialization<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    Teacher t1("Computer Science", 50000);
    t1.display();
    t1.work();

    return 0;
}