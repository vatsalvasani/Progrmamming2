#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//input 2
//output (()) ()() 
void valid_paranthesis(int open,int close,string output)
{
    if(open == 0 && close == 0)
    {
        cout<<output<<" ";
        return;
    }
    if(open!=0 && close>open)
    {
        open--;
        string o1 = output+'(';
        string o2 = output + ')';
        valid_paranthesis(open,close,o1);
        close--;
        valid_paranthesis(open+1,close,o2);
    }
    else if(open==0){
        close--;
        string o1 = output+')';
        valid_paranthesis(open,close,o1);
    }
    else{
        open--;
        string o1 = output+'(';
        valid_paranthesis(open,close,o1);
    }
    
}
int main() {
    int input = 3;
    int open = input;
    int close = input;
    string output = "";
    valid_paranthesis(open,close,output);
}