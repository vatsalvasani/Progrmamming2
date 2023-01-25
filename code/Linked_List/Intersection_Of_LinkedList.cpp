int linlen(ListNode* A){
    int count=0;
    while(A!=NULL){
        A=A->next;
        count++;
    }
    return count;
}
//use two pointers and iterate one of it for which length of list is greater.
//now iterate both and we get the intersection node
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    int l1=linlen(A);
    int l2=linlen(B);
    ListNode* a1=A;
    ListNode* b1=B;
    int dif=abs(l1-l2);
    if(l1>l2){
        while(dif--){
            a1=a1->next;
        } 
    }
    else{
        while(dif--){
            b1=b1->next;
        } 
    }
    while(a1!=b1 and a1!=NULL and b1!=NULL){
        a1=a1->next;
        b1=b1->next;
    }
    if(a1==NULL) return a1;
    if(b1==NULL) return b1;
    return a1;
}
