// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> howSum(int number,vector<int> v1,map<int,vector<int>> &mp)
{
    vector<int> v2 = {-1};
    if(mp.find(number)!=mp.end())return mp[number];
    if(number==0)return {};
    if(number<0)return v2;
    
    for(int i=0;i<v1.size();i++)
    {
        int remainder = number - v1[i];
        vector<int> temp = howSum(remainder,v1,mp);
        mp[number] = temp;
        if(temp!=v2)
        {
            temp.push_back(v1[i]);
            return temp;
        }
        
    }
    return v2;
}
int main() {
    // Write C++ code here
    int number = 10015;
    vector<int> v1 = {10,20,2,3,5,40,30};
    map<int,vector<int>> mp;
    vector<int> v2 = howSum(number,v1,mp);
    for(auto i : v2)
    {
        cout<<i<<" ";
    }

    return 0;
}