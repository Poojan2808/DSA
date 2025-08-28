/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tp1 = headA;
        ListNode* tp2 = headB;

        if(tp1 == NULL && tp2 == NULL) return NULL;

        while(tp1 != tp2){
            tp1 = tp1->next;
            tp2 = tp2->next;

            if(tp1 == tp2) return tp1;

            if(tp1 == NULL) tp1 = headB;
            if(tp2 == NULL) tp2 = headA;

        }

        return tp1;
        
    }
};