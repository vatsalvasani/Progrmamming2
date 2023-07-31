#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v1;
    int m=3,n=4;
    for(int i=0;i<=m+1;i++)
    {
        vector<int> v2;
        for(int j=0;j<=n+1;j++)
        {
            v2.push_back(0);
        }
        v1.push_back(v2);
    }
    v1[1][1] = 1;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            v1[i+1][j] += v1[i][j];
            v1[i][j+1] += v1[i][j];
        }
    }
    cout<<v1[m][n];
    return 0;
}