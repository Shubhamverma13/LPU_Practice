#include<iostream>
using namespace std;

class Person{
    public:
    Person(){
        cout<<"Constructor is executed" << endl;
        
    }
    //Destructor
    //also have same name as class name beginning with ~
    // we can only have one destructor
    //cannot overload distructor
    //like constructor, it does not require any return type and parameters
    
    ~Person(){
        cout<<"Distructor is executed"<< endl;
    }
};

int main()
{
    Person p1;
}

//Destructors
