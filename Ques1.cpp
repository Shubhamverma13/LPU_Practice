#include<iostream>
using namespace std;

vector<int> mergeArr(vector<int>&v1,vector<int>&v2){
    vector<int>ans;
    for(int i = 0; i < v1.size();i++)ans.push_back(v1[i]);
    for(int i = 0; i< v2.size();i++)ans.push_back(v2[i]);
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    return 0;

}