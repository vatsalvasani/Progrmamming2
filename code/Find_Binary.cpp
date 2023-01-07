#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =30;
    vector<int> binary;
    while(n>0)
    {
        int k = n % 2;
        n = n / 2;
        binary.push_back(k);
    }
    //answer Will be Reverse For 30 = 01111
    for(auto A:binary)
    {
        cout<<A;
    }
    
}