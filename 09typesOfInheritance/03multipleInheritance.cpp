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

class Teacher : public Engineer, public Youtuber{

    public:
    string subject;

    Teacher(string specialization, int subscribers, string subject){
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->subject = subject;
    }
    void showcase(){
        cout<<subject<<endl;
        work();
        makeVideo();
    }
    void teach(){
        cout<<"Teacher is teaching"<<endl;
    }
};

int main(){
    Teacher t1("Computer Science", 10000, "C++");
    // t1.showcase();
    t1.teach();
    return 0;
}