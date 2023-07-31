// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n,map<int,int> &mp)
{
    if(mp[n]!=0)return mp[n];
    if(n<=2)return 1;
    mp[n] = fibonacci(n-1,mp) + fibonacci(n-2,mp);
    return mp[n];
}

int main() {
    map<int,int> mp;
    cout<<fibonacci(50,mp);
    
    return 0;
}