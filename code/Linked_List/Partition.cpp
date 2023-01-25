ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* temp1 = new ListNode(0);
    ListNode* temp2 = new ListNode(0);
    ListNode* curr1 = temp1;
    ListNode* curr2 = temp2;
    if(A==NULL)return NULL;
    while(A!=NULL){
        if(A->val<B){
            curr1 -> next = A;
            curr1 = curr1->next;
        }
        else{
            curr2 -> next = A;
            curr2 = curr2->next;
        }
        A=A->next;
    }
    curr1->next = temp2->next;
    curr2->next = NULL;
    return temp1->next;
   
}