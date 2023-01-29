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

//  92. Reverse Linked List II
// Medium
// 8.6K
// 383
// Companies
// Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

 

// Example 1:


// Input: head = [1,2,3,4,5], left = 2, right = 4
// Output: [1,4,3,2,5]
// Example 2:

// Input: head = [5], left = 1, right = 1
// Output: [5]
 

// Constraints:

// The number of nodes in the list is n.
// 1 <= n <= 500
// -500 <= Node.val <= 500
// 1 <= left <= right <= n



class Solution {
public:
ListNode* reverse1(ListNode* first,ListNode* second)
{
    if(first==second){return first;}
    ListNode* temp = reverse1(first->next,second);
    first->next->next=first;
    first->next=NULL;
    return second;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL)return head;
        if(left==right)return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* first = head;
        ListNode* first2 = NULL;
        ListNode* first1 = dummy;
        ListNode* second = dummy;
        left--;
        while(left--)
        {
            if(first->next==NULL)return head;
            first=first->next;
            first1=first1->next;
        }
        while(right--)
        {
            if(second->next==NULL)return head;
            second=second->next;
        }
        ListNode* second1 = second->next;
        first2 = reverse1(first,second);
        first1->next = first2;
        first->next = second1;
        return dummy->next;
    }
};