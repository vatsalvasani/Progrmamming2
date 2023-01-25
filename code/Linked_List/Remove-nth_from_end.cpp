/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//  Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

// Example 1:


// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:

// Input: head = [1], n = 1
// Output: []
// Example 3:

// Input: head = [1,2], n = 1
// Output: [1]
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(head==NULL)return head;
       ListNode* curr = head;
       ListNode* i_head = new ListNode(0);
       i_head->next = head;
       ListNode* prev = i_head;
       ListNode* prev1 = head;
       int k = n-1;
       while(k--){
           if(curr->next==NULL)return head;
           curr=curr->next;
       }
       
       while(curr->next!=NULL)
       {
           curr = curr->next;
           prev = prev->next;
           prev1 = prev->next;
       }
       prev->next = prev1->next;
       return i_head->next;
    }
};