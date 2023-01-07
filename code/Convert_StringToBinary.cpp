// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string A ="10111";
    int k = 0;
    for(int i=A.size()-1,j=0;i>=0;i--,j++)
    {
        k += (pow(2,j)*(A[i]-'0'));
    }
    cout<<k;
    return 0;
}