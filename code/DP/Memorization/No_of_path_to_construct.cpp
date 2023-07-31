// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int canConstruct(string s1,vector<string> v1,map<string,int> &mp)
{
    if(mp.find(s1)!=mp.end())return mp[s1];
    if(s1.size()==0)return true;
    int no_of_path = 0;
    for(int i=0;i<v1.size();i++)
    {
        if(s1.substr(0,v1[i].size()) == v1[i])
        {
            mp[s1] = canConstruct(s1.substr(v1[i].size()),v1,mp);
            if(mp[s1])
            {
                no_of_path++;
            }
        }
    }
    return no_of_path;
}
int main() {
    // Write C++ code here
    string s1 = "abcdabcdabcdabcdabcd";
    vector<string> v1 = {"ab","c","cd","d","a","b","c","abc","abcdabcdabcdabcdabcd"};
    map<string,int> mp;
    cout<<canConstruct(s1,v1,mp);

    return 0;
}