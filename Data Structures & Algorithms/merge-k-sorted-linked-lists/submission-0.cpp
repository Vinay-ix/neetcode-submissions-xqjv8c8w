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
    ListNode* merge(ListNode* a, ListNode* b){
        ListNode* c =  new ListNode(100);
        ListNode* tc = c;
        while(a!=NULL && b!=NULL){
            if(a->val < b->val){
                tc->next = a;
                a = a->next;
            }else{
                tc->next = b;
                b = b->next;
            }
            tc = tc->next;
        }
        if(a==NULL){
            tc->next = b;
        }else{
            tc->next = a;
        }

        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode* a = lists[0];
            lists.erase(lists.begin());
            ListNode* b = lists[0];
            lists.erase(lists.begin());
            ListNode* res = merge(a,b);
            lists.push_back(res);
        }

        return lists[0];

    }
};
