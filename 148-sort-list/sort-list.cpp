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
    ListNode* sortList(ListNode* head) {
        multimap<int,int>m;

        ListNode* tp = head;
        while(tp){
            m.insert({tp->val,1});
            tp = tp->next;
        }
        int i = 1;

        ListNode* tp1 = head;

       for(auto it:m){
            tp1->val = it.first;
            tp1 = tp1->next;
       }
        return head;
    }
};