// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct LinkNode{
    int val;
    LinkNode *next;
};
//important observation is link node that we created is imaginary assume that it just in memory now l1 and l2 are pointer witch point to same node that is why l1->val and l2->val give same answer
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    struct LinkNode *l1 = (struct LinkNode*)malloc(sizeof(struct LinkNode));
    struct LinkNode *l2 = l1;
    l1->val = 5;
    cout<<l1->val<<l2->val;
    cout<<" "<<l1<<" "<<l2;
    //output : 55 0x56063d145eb0 0x56063d145eb0
    return 0;
}