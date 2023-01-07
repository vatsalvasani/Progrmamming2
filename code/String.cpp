// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    
    // string s1 = "Hi I Am Str1";
    // string s2 = "Hi I Am Str2";
    
    char s1[] = "Hi I Am Str1";
    char s2[] = "Hi I Am Str2";
    
    //can't perform on string datatype valid for char[]
    //s2 copies into s1
    cout<<strcmp(s1,s2)<<endl;
    strcpy(s1,s2);
    cout<<s1<<" "<<s2<<endl;
    
    //-1
// Hi I Am Str2 Hi I Am Str2


    //Can Perform On String
    // cout<<s1.substr(0,6)<<s2.substr(0,6)<<endl;

    return 0;
}