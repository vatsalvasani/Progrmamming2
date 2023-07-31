#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void subset(string input,string output,vector<string> &v1)
{
    if(input == "")
    {
        v1.push_back(output);
        return;
    }
    string o1 = output;
    string o2 = output;
    o2 += input[0];
    input.erase(input.begin());
    subset(input,o1,v1);
    subset(input,o2,v1);
}
int main() {
    string input = "abcd";
    string output = "";
    vector<string> v1;
    subset(input,output,v1);
    for(auto i:v1)
    {
        cout<<i<<" ";
    }
    return 0;
}