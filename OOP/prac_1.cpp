#include<iostream>
using namespace std;

class Student{

    //In this I will define attributes and behaviours
    //class is like a blueprint or template
    //by default, variables and methods in a class are private


    public:
    int rollNo;
    string myname;

    //Getter

    int getPassword() {
        return password;
    }

    //Setter

    void setPassword(int input) {
        password = input;
    }

    void myMethod() {
        cout<<"Me method."<<endl;
    }

    private:
    int password = 123;

    
};

int main()
{
    //objects -> Attributes (variables) and Behaviours(methods)
    //person - Name, age, hight |||| Walking() Running()
    //Access modifiers -> private (can only be accessed inside a class)
    //public(can be accessed outside the class)
    Student s1;
    s1.myname = "Shubham";
    s1.rollNo = 1;
    cout<<"My old password is :" <<s1.getPassword();

    
    
    
    cout<<s1.getPassword();
    s1.setPassword(234);
    

    Student s2;
    s2.myname="Cv";
    s2.rollNo = 2;
    //s2.myMethod();

    // cout<<"Student 1 name is : "<< s1.myname <<endl;
    // cout<<"Student 2 name is : "<< s2.myname <<endl;

    //creating object dynamically

    Student *s3 = new Student;

    (*s3).myname = "Shubham";

    //s3->myname = "Shubham";

   // cout<<"Student  3 name is : "<< s3->myname <<endl;


}