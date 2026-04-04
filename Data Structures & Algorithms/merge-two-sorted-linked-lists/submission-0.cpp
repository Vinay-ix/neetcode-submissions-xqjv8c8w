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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a = list1;
        ListNode* b = list2;
        ListNode* c = new ListNode(100);
        ListNode* tc = c;
        while(a!=NULL && b!=NULL){
            if(a->val < b->val){
                tc->next =  a;
                a=a->next;
            }else{
                tc->next = b;
                b=b->next;
            }
            tc =tc->next;
        }

        if(a==NULL){
            tc->next =b;
        }
        if(b==NULL){
            tc->next = a;
        }
        return c->next;
    }
};
