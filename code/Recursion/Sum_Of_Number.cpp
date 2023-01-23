// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//trust the function that it will give me sum of number so just get sum of number all accept last and add it with last and base case
int sumofnumber(int n)
{
    if(n==0)return 0;
    int k = (n%10) + (sumofnumber(n/10));
    return k;
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    cout<<sumofnumber(125);

    return 0;
}