#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<double> v1;
    double n = 50;
    for(int i=0;i<=n;i++)
    {
        v1.push_back(0);
    }
    v1[1] = 1;
    for(int i=0;i<=n;i++)
    {
        v1[i+1] += v1[i];
        v1[i+2] += v1[i];
    }
    cout<<v1[n]<<" "<<v1.size();
    return 0;
}