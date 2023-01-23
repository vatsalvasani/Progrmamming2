// Online C++ compiler to run C++ program online
//simple idea is just trust the function and write base case
// here we trust the function that it will give me factorial of n so we get factorial of n-1
//  and multiply it with n

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==1)return 1;
    int k = (n)*(factorial(n-1));
    return k;
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    cout<<factorial(5);

    return 0;
}