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
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v1;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i]!=NULL)
            {
                v1.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
        {
            ListNode* l1 = new ListNode(v1[i]);
            l1->next = NULL;
            temp->next = l1;
            temp = temp->next;
        }
        return dummy->next;
    }
};