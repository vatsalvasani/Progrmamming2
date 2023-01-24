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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    if(head==NULL)return head;
    if(head->next==NULL)return head;
    else{
        ListNode *temp1 = reverseList(head->next);
        ListNode *headnext = head->next;
        headnext->next = head;
        head->next = NULL;
        return temp1;
    }
        
    }
};