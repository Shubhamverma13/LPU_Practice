#include<iostream>
using namespace std;

int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    int smallAns1 = fib(n-1);
    int smallAns2 = fib(n-2);

    return smallAns1+smallAns2;
}


int main()
{
    int n;
    cout<<"Enter the value of n : " << endl ;
    cin>>n;
    int ans = fib(n);

    cout<<ans;
}