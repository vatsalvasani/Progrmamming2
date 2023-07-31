// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int number = 18;
    vector<vector<int>> v1;
    vector<int> v2 = {5,7,9};
    vector<int> v3= {-1};
    for(int i=0;i<number+1;i++)
    {
        v1.push_back(v3);
    }
    v1[0] = {};
    for(int i=0;i<number+1;i++)
    {
        if(v1[i]!=v3)
        {
            for(int j=0;j<v2.size();j++)
            {
                if(i+v2[j]<=v1.size())//so that it not exceed the limit
                {
                    for(auto k : v1[i])
                    {
                         v1[i+v2[j]].push_back(k);
                    }
                    v1[i+v2[j]].push_back(v2[j]);
                }
            }
        }
    }
    for(auto i : v1[number])
    {
        cout<<i<<" ";
    }
    
    return 0;
}