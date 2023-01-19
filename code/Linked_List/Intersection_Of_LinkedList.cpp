// Write a program to find the node at which the intersection of two singly linked lists begins.

// For example, the following two linked lists:


// A:          a1 → a2
//                    ↘
//                      c1 → c2 → c3
//                    ↗
// B:     b1 → b2 → b3

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    unordered_map<ListNode*,int> mp;
    while(A!=NULL){
        mp[A]++;
        A=A->next;
    }
    while(B!=NULL)
    {
        mp[B]++;
        if(mp[B]==2)return B;
        B=B->next;
    }
    return NULL;
    
}
