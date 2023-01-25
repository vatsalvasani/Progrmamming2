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
//  61. Rotate List
// Medium
// 7.1K
// 1.3K
// Companies
// Given the head of a linked list, rotate the list to the right by k places.

 

// Example 1:


// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]
// Example 2:


// Input: head = [0,1,2], k = 4
// Output: [2,0,1]
 

// Constraints:

// The number of nodes in the list is in the range [0, 500].
// -100 <= Node.val <= 100
// 0 <= k <= 2 * 109

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next ==NULL) return head;
        ListNode*temp = head;
        int n = 0;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        k = k % n;
        if(k==0)return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        
        while(k--)
        {
            head = dummy->next;
            prev = dummy;
            while(head->next!=NULL)
            {
                head= head->next;
                prev = prev->next;
            }
            prev->next=NULL;
            head->next = dummy->next;
            dummy->next = head;
        }
        return dummy->next;
    }
};