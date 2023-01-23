// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//trust the function that it will give me fibonacci of n so what i do is add fibonacci of n-1 with n.
int fibonacci(int n)
{
    if(n==2)return 1;
    if(n==1)return 1;
    int k = fibonacci(n-1)  + fibonacci(n-2) ;
    return k;
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    cout<<fibonacci(6);

    return 0;
}