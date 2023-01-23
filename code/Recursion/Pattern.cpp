// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//trust the function that it will give me sum of number from 1 to n so just get sum of number till n-1 and add n to it.
void print(int n)
{
    if(n==0){return;}
    print(n-1);
    cout<<n<<" ";
}
void pattern(int n)
{
    if(n==0)return;
    cout<<endl;
    print(n);
    pattern(n-1);
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    pattern(5);

    return 0;
}