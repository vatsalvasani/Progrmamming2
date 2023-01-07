// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool anss(const pair<string,int>&a,const pair<string,int>&b)
{
    return a.second<b.second;
}
int main() {
    // Write C++ code here
    vector<pair<string,int>> v1;
    for(int i=0;i<2;i++)
    {
        string k;
        cin>>k;
        v1.push_back(make_pair(k,i));
    }
        vector<pair<string,int>>::iterator itr;
        sort(v1.begin(),v1.end(),anss);
                // sort(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
    }
    return 0;
}