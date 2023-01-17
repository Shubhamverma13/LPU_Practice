//Operator overloading

#include<iostream>
using namespace std;
//check which operator can be overloaded and which can not.

class Test
{
    int num;

    public:
    Test(){
        num = 10;
    }

    void operator++(){
        num += 2;
    }

    void display(){
        cout<<"The count is : "<< num << endl;
    }

};


int main()
{
    Test t;
    t.display();
    ++t;

    t.display();

    // int a = 10;
    // int b = 5;
    
    
}