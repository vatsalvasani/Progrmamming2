#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//input ab
//output ab Ab AB aB
void permutation_with_case_change(string input,string output)
{
    if(input == "")
    {
        cout<<output<<" ";
        return;
    }
    string output1 = output;
    output1+=input[0];
    string output2 = output;
    output2=output2 + ((char)(input[0]-32));
    input.erase(input.begin());
    permutation_with_case_change(input,output1);
    permutation_with_case_change(input,output2);
}
int main() {
    string input = "ab";
    string output = "";
    permutation_with_case_change(input,output);
}