// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int square(int m,int n,map<pair<int,int>,int> &mp)
{
    if(mp[make_pair(m,n)]!=0)return mp[make_pair(m,n)];
    if(n==1 || m==1)return 1;
    if(n==0 || m==0)return 0;
    int k = square(m-1,n,mp);
    int l = square(m,n-1,mp);
    mp[make_pair(m,n)] = k+l;
    return mp[make_pair(m,n)];
}

int main() {
    map<pair<int,int>,int> mp;
    cout<<square(16,16,mp);
    
    return 0;
}
//155117520