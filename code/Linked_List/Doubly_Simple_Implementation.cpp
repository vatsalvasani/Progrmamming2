#include<bits/stdc++.h>
using namespace std;
struct LinkNode{
  struct LinkNode *prev;
  int value;
  struct LinkNode *next;
};
struct LinkNode *head = NULL;
void insert(int data){
    struct LinkNode *new_node = (struct LinkNode*)malloc(sizeof(struct LinkNode));
    new_node->next = head;
    new_node->prev = NULL;
    new_node->value = data;
    if(head!=NULL)
    {
        new_node->next->prev = new_node;
    }
    head = new_node;
}
void display(){
    struct LinkNode *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp = temp->prev;
    }
    
}
int main(){
    insert(1);
    insert(2);
    insert(3);
    display();
    return 0;
}