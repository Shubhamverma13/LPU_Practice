/*
Polymorphism
poly - many, morph - forms

e.g -> a person behaves differently according to different situation.

Polymorphism 
a) compile -> Function Overloading and Operator Overloading
b)Runtime -> Finction Overriding 


Compile time -> overloading
 - The overloaded functions are invoked by matching the type and number of argument.
 - This info is avilable at the compile time and therefore compiler selects the appropriate function at the compile time.
 - achieved by function and operator overloading
 - It is also known as static binding or early binding


 * Function overloading // It is compile time overloading

 Two or more functions having name name, but different parameters (different type of parameter or different number of parameter)
 



*/


//------------------------------------------------------------------------
// #include<iostream>//This is example of function overloading with different number of arguments in a method with same name.
// using namespace std;

// class functionOverloading{
//     public:
//     int add(int a, int b){
//         return a+b;
//     }

//     int add(int a, int b, int c){
//         return a+b+c;
//     }
// };

// int main()
// {
//     functionOverloading obj1;
//     cout<< obj1.add(2,4,4);
// }

//Advantage - Increase readability of our code.
//---------------------------------------------------------------------------------------------------------------------------


//eg of function overloading with different types of arguments in a method with same name.


#include<iostream>
using namespace std;

int mul(int a, int b){
    return a*b;
}

float mul(double x, int y){
    return x * y;
}

int main()
{

    int ans =mul(2,3);
    cout<<ans;

    float b = mul(2.1,4);
    cout<<b;
}