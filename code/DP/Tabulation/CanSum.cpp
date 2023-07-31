// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int number = 18;
    vector<int> v1;
    vector<int> v2 = {5,7,9};
    for(int i=0;i<number+1;i++)
    {
        v1.push_back(0);
    }
    v1[0] = 1;
    for(int i=0;i<number+1;i++)
    {
        if(v1[i]==1)
        {
            for(int j=0;j<v2.size();j++)
            {
                if(i+v2[j]<=v1.size())//so that it not exceed the limit
                {
                    v1[i+v2[j]] = 1;
                }
            }
        }
    }
    cout<<v1[number];
    
    return 0;
}