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
     ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* b = reverseList(slow->next);
        ListNode* a = head;
        slow->next =  NULL;
        ListNode* tb =b;
        ListNode* ta = a;
        ListNode* c=  new ListNode(100);
        ListNode* tc = c;
        while(ta!=NULL && tb!=NULL ){
            tc->next = ta;
            tc = tc->next;
            ta = ta->next;
            tc->next = tb;
            tc = tc->next;
            tb = tb->next;
        }
        tc->next = ta;
        head = c->next; 
        
    }
};
