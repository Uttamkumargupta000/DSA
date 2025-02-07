#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;

    person(string name, int age){
        this->name = name;
        this-> age = age;
    }
    
    ~person(){
        cout<<"parent destructor\n";
    }
};

class student : public person{
    public:
    int rollnl;

    student(string name, int age, int rollnl): person(name, age){
        this -> rollnl = rollnl;
    }
    
    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollnl: "<<rollnl<<endl;
    }

    ~student(){
        cout<<"child destructor\n";
    }
};

int main(){
    
    student s1("uttam kumar",21,1234);
    
    s1.getinfo();
    return 0;
}