#include<iostream>
using namespace std;
/*
Namespaces

They are use to organize too many classes so that it can be easy to handle the application

*/
namespace Greetings1{
    void hello(){
        cout << "Hello 1" << endl;
    }
}

namespace Greetings2{
    void hello(){
        cout << "Hello 1" << endl;
    }
}

int main(){

    Greetings1::hello();
    Greetings2::hello();
    
}

