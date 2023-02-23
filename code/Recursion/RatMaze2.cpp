// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void path(string p,int a,int b)
{
    if(a==1&&b==1)
    {
        cout<<p<<endl;
        return ;
    }
    if(b>1)
    {
        path(p+'R',a,b-1);
    }
    if(a>1)
    {
        path(p+'D',a-1,b);
    }
}

int main() {
    // cout<<path("",3,3);
    path("",3,3);
    return 0;
}