// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//trust the function that it will give me sum of number from 1 to n so just get sum of number till n-1 and add n to it.
int fibonacci(int n)
{
    if(n==0)return 1;
    if(n==1)return 1;
    int k = (n) + (fibonacci(n-1));
    return k;
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    cout<<fibonacci(5);

    return 0;
}