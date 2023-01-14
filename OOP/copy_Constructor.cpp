#include<iostream>
using namespace std;
class Number{
    int a;

    public:

    Number(){
        a = 0;
    }

    Number(int num){
        a = num;
    }

    void display(){
        cout<<"The value of a is :" << a << endl;
    }
};
int main()
{
    Number num1, num2(10);
    num1.display();
    num2.display();

    Number num3 = num2;//Number num3(num1);
    num3.display();

}