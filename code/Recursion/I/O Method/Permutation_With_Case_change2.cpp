#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//digit and uppercase letter included
//input a1C2
//output a1C2 a1c2 A1C2 A1c2 
void permutation_with_case_change(string input,string output)
{
    if(input == "")
    {
        cout<<output<<" ";
        return;
    }
    if(isdigit(input[0]))
    {
        output+=input[0];
        input.erase(input.begin());
        permutation_with_case_change(input,output);
    }
    else{
        string output1 = output;
        output1+=input[0];
        string output2 = output;
        if(input[0]>=97)
        {
            output2=output2 + ((char)(input[0]-32));
        }
        else{
            output2=output2 + ((char)(input[0]+32));
        }
        input.erase(input.begin());
        permutation_with_case_change(input,output1);
        permutation_with_case_change(input,output2);
    }
    
}
int main() {
    string input = "a1C2";
    string output = "";
    permutation_with_case_change(input,output);
}