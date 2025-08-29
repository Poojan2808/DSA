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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        ListNode* tp = head;
        int count =0 ;
        ListNode* store = NULL;

        while(tp){
            count++;
            if(tp->next == NULL){
                store = tp;
            }
            tp = tp->next;
            
        }
        k =  k % count ;
        if(k==0) return head;
        
        

        int d = count - k -1;
        ListNode* t1 = head;
        
        while(d--){
            t1 = t1->next;
        }
        ListNode* newhead = t1->next;
        t1->next = NULL;
        store->next = head;

        return newhead;
    }
};