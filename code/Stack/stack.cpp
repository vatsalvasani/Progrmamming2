// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(2);
    s.pop();
    cout<<s.top();
    cout<<s.empty();
    cout<<s.size();
    return 0;
}