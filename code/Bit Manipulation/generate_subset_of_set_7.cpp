// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
//print all sbset of set
using namespace std;
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    vector<char> v1;
    v1.push_back('a');
    v1.push_back('b');
    v1.push_back('c');
    int n=v1.size();
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            //(1<<j because we want 0 2 4 not 0 1 2)
            int k = (1<<j)&i;
            if(k!=0)cout<<v1[j];
        }
        cout<<endl;
    }



    return 0;
}