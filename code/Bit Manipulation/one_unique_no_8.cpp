// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//print unique no. which only occure once
//if we find xor of all then same no's xor will become 0 and one which is unique remain
int main() {
    vector<int> v1 = {1,2,4,5,2,1,4};
    int x;
    for(int i=0;i<v1.size()-1;i++)
    {
        x = v1[i]^v1[i+1];
    }
    cout<<x;


    return 0;
}