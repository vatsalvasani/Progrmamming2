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


//  82. Remove Duplicates from Sorted List II
// Medium
// 7.2K
// 190
// Companies
// Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

 

// Example 1:


// Input: head = [1,2,3,3,4,4,5]
// Output: [1,2,5]
// Example 2:


// Input: head = [1,1,1,2,3]
// Output: [2,3]
 

// Constraints:

// The number of nodes in the list is in the range [0, 300].
// -100 <= Node.val <= 100
// The list is guaranteed to be sorted in ascending order.


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL);
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        map<int,int> mp;
        while(head!=NULL){
            mp[head->val]++;
            head=head->next;
        }
        auto itr = mp.begin();
        while(itr!=mp.end()){
            if(itr->second == 1)
            {
                ListNode* l1 = new ListNode(itr->first);
                temp->next = l1;
                l1->next = NULL;
                temp=temp->next;
            }  
            itr++;
        }
        return dummy->next; 
    }
};