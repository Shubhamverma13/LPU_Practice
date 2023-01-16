#include<iostream>
using namespace std;
int degreeofArray(int arr[], int n) {
    int deg = 0;
    for(int i = 0; i < n; i++) {
        int c = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])c++;
        }
        if(c>deg)deg=c;
    }
    return deg;
}

int main()
{
    int arr[] = {1,2,2,2,3,1,4,2};

    int ans = degreeofArray(arr,8);
    

    cout<<ans;

}