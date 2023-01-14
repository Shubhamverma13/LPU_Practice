#include<iostream>
using namespace std;
class Person{
    public:
    int a;
    int b;

    //Default constructor
    //Have sane name as class
    //No parameters by default
    //no return type

    Person() {
        cout<<"This is uotput from constructor"<<endl;

    }
    Person(string name){
        cout<<"The name is:"<<name<<endl;
    }

    void display(){
        cout<<"This is display function"<<endl;

    }
};

int main()
{
    Person p1("Shubham");
    //p1.Person()
    p1.display();  

}