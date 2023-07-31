// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool canConstruct(string s1,vector<string> v1,map<string,bool> &mp)
{
    if(mp.find(s1)!=mp.end())return mp[s1];
    if(s1.size()==0)return true;
    for(int i=0;i<v1.size();i++)
    {
        if(s1.substr(0,v1[i].size()) == v1[i])
        {
            mp[s1] = canConstruct(s1.substr(v1[i].size()),v1,mp);
            if(mp[s1])
            {
                return true;
            }
        }
    }
    return false;
}
int main() {
    // Write C++ code here
    string s1 = "abdc";
    vector<string> v1 = {"ab","c","cd"};
    map<string,bool> mp;
    cout<<canConstruct(s1,v1,mp);

    return 0;
}