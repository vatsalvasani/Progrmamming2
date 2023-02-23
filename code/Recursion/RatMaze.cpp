// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int count(int row,int col)
{
    if(row==1 || col==1)
    {
        return 1;
    }
    int left = count(row,col-1);
    int right = count(row-1,col);
    return left+right;
}
int main() {

    cout<<count(2,3);

    return 0;
}