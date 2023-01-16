#include<iostream>
using namespace std;
int skipX(int arr[], int size,int x) {
    int sum = 0;
    for(int i =0; i < size; i++) {
        if(arr[i] == x){
            continue;
        } else sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[6] = {1,2,3,5,4,7};
    int ans = skipX(arr,6,3);
    cout<<ans;
}