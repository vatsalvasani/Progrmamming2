// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//trust the function that it will give me that string l to h is palindrome or not i just give ans for that first and last char are same or not
bool Palindrome(int l,int h,string n)
{
    if(l>=h)return true;
    if(n[l]!=n[h])return false;
    return (Palindrome(l+1,h-1,n));
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    string s = "vatsallastaav";
    cout<<Palindrome(0,s.size()-1,s);

    return 0;
}