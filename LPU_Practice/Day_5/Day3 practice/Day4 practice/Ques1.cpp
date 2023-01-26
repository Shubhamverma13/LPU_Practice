#include<iostream>
using namespace std;
int main()
{
    vector<int>v = {1,2,2,2,3,3,4};
    vector<int>ans = removeDublicate(vector<int>v){
        vector<int>ans;
        ans.push_back(v[0]);
        for(int i = 1; i < v.size();i++){
            if(v[i] == v[i-1]) {
                continue;
            }
            ans.push_back(v[i]);
        }
        return ans;
    }

}

