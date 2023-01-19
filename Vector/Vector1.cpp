#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> numbers = {3,7,1,9,4,5,2,8,5};
    cout<<"Elements : "<<endl;
    for(int i = 0; i < numbers.size(); i++){
        cout<<numbers[i]<<" ";
    }cout<<endl;

    cout<<"Maximum element is : "<<*max_element(numbers.begin(),numbers.end())<<endl;

    cout<<"Minimum element is : " << *min_element(numbers.begin(),numbers.end())<<endl;
    return 0;
}