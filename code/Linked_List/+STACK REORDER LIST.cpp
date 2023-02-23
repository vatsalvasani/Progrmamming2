143. Reorder List
Medium
8.2K
281
Companies
You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.

 

Example 1:


Input: head = [1,2,3,4]
Output: [1,4,2,3]
Example 2:


Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]
 

Constraints:

The number of nodes in the list is in the range [1, 5 * 104].
1 <= Node.val <= 1000
Accepted
633K
Submissions
1.2M
Acceptance Rate
52.1%
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head->next==NULL || head->next->next==NULL)return;
        stack<ListNode*> s1;
        ListNode* temp = head;
        long long int count =0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int k = count/2;
        temp = head;
        if(count%2!=0)k++;
        ListNode* temp3;
        
        while(k>0)
        {
            k--;
            temp=temp->next;
            if(k==1 && count%2!=0){temp3=temp;}
            if(k==1 && count%2==0){temp3=temp;}
        }
        
        while(temp!=NULL)
        {
            s1.push(temp);
            temp=temp->next;
        }
        temp3->next = NULL;
        temp = head;
        while(!s1.empty() && temp!=NULL)
        {
            ListNode* temp1 = s1.top();
            ListNode* temp2 = temp->next;
            temp->next = temp1;
            temp->next->next = temp2;
            temp=temp->next->next;
            s1.pop();
        }

    }
};