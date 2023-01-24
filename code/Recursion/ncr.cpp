// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int NCR(int n,int r)
{
    if(r==n || r==0)return 1;
    return NCR(n-1,r-1) + NCR(n-1,r);
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    cout<<NCR(5,2);

    return 0;
}