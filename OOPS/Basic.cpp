#include<bits/stdc++.h>
//to access class form another file
#include "hero.cpp"
using namespace std;

//creating class 
class Hero{
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    //default constructor
    Hero(){
        cout<<"simple constructor called "<<endl;
        name = new char[100];
    }

    //parametric constructor
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this->health=health;
    }

    Hero(int health, char level){
        this->level=level;
        this->health=health;
    }
    
    //copy constructor
    Hero (Hero& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name= ch;

        cout<<"copy constructor called "<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[ Name : "<<this->name<<" , ";
        cout<<"health "<<this->health<<" , ";
        cout<<"level "<<this->level<<" ] ";
        cout<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level=ch;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    //destructor
    ~Hero(){
        cout<<"destructor bhai called"<<endl;
    }
};

int Hero :: timeToComplete = 5;

int main(){

    //creation of object
    /* hero h1;
    cout<<"size : "<<sizeof(h1)<<endl; */
     
    //  Hero ramesh;
    // cout<<"size of ramesh : "<<sizeof(ramesh)<<endl;

    //to access value in us "." operator
    //  ramesh.health=70;
    //  ramesh.level='A';
    //  cout<<"Health is : "<<ramesh.health<<endl;
    //  cout<<"Level is : "<<ramesh.level<<endl; 

    //using getter and settler value to access the private value
    // cout<<"ramesh health is : "<<ramesh.getHealth()<<endl;
    // cout<<"level is : "<<ramesh.getLevel()<<endl;
    // ramesh.setHealth(70);
    // ramesh.setLevel('A');
    // cout<<"ramesh health is : "<<ramesh.getHealth()<<endl;
    // cout<<"level is : "<<ramesh.getLevel()<<endl;

    // //static allocation
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('B');
    // cout<<"level is "<<a.level<<endl;
    // cout<<"helath is "<<a.getHealth()<<endl;

    // //dynamically created
    // Hero *b = new Hero;
    // b->setHealth(70);
    // b->setLevel('A');
    // cout<<"Level is "<<(*b).level<<endl;
    // cout<<"helath is "<<(*b).getHealth()<<endl;

    // cout<<"Level is "<<b->level<<endl;
    // cout<<"helath is "<<b->getHealth()<<endl;

    //statically created
    // Hero ramesh;

    //Dynamically created
    // Hero *h = new Hero;
    // Hero *b = new Hero();

    // Hero ramesh(10);
    // cout<<"address of ramesh : "<<&ramesh<<endl;
    // ramesh.getHealth();
    // ramesh.print();
    
    // //dynamically
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22,'B');
    // temp.print();

    // Hero suresh(70,'C');
    // suresh.print();
    // //copy constructor
    // Hero R(suresh);
    // R.print();

    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7]="uttam";
    // hero1.setName(name);

    // hero1.print();

    // //use default copy constructor
    // Hero hero2(hero1);
    // // Hero hero2=hero1;
    // hero2.print();
    
    // hero1.name[0]='G';
    // hero1.print();

    // hero2.print();

    // //copy assignment operator
    // hero1 = hero2;
    // hero1.print();
    // hero2.print();

    //destructor

    //static
    // Hero a;

    // //dynamically 
    // Hero *b = new Hero();
    // //manually destructor call
    // delete b;

    //static
    cout<<Hero :: timeToComplete<<endl;

    Hero a;
    cout << a.timeToComplete<<endl;

    Hero b;
    b.timeToComplete = 10;
    cout<<a.timeToComplete <<endl;
    cout<< b.timeToComplete <<endl;




    return 0;
}