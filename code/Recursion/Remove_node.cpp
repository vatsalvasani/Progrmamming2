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
//give me head of head->next to end and i will store in head to next and make decsion on my head and accordingly return
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        if(head!=NULL){
            head->next = removeElements(head->next,val);
            if(head->val!=val){
                return head;
            }
            else{
                return head->next;
            }
            
        }
        else{return head;}
    }
};