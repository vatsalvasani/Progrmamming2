/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode* A)
{
    ListNode *prev=NULL,*cur=A,*nex=A->next;
    while(cur!=NULL)
    {
        cur->next = prev;
        prev= cur;
        cur = nex;
        if(nex!=NULL){nex = nex->next;}
    }
    return prev;
}
ListNode* Solution::reverseList(ListNode* A) {
    if(A==NULL)return NULL;
    if(A->next==NULL)return A;
    return reverse(A);
}
