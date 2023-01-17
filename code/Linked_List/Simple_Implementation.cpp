#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int value;
    struct ListNode *next;
};
struct ListNode *head = NULL;
void insert(int data){
    struct ListNode *new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
    new_node->next = head;
    new_node->value = data;
    head = new_node;
}
void display(){
    struct ListNode *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void delete1(int data){
    struct ListNode *temp = head->next;
    struct ListNode *temp1 = head;
    if(temp1->value==data){
        head = temp1->next;
        delete temp1;
        return;
    }
    
    while(temp->value!=data)
    {
        temp = temp->next;
        temp1 = temp1->next;
    }
    temp1->next = temp->next;
    delete temp;
}
int main(){
    insert(1);
    insert(2);
    insert(5);
    insert(6);
    display();
    delete1(6);
    display();

    
    return 0;
}