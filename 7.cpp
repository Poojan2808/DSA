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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode*head=new ListNode(0);
        ListNode* tail=head;
        int carry=0;
        while(l1 != nullptr && l2 !=nullptr){
            int sum = l1->val + l2->val + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode *newnode= new ListNode(digit);
            tail->next=newnode;
            tail=newnode;

            l1=l1->next;
            l2=l2->next;
        }

        while(l1 != nullptr){
            int sum = l1->val + carry;
            int digit = sum % 10;
            carry = sum/10;

            ListNode *newnode= new ListNode(digit);
            tail->next=newnode;
            tail=newnode;
            

             l1=l1->next;


        }
        while(l2 != nullptr){
            int sum = l2->val + carry;
            int digit = sum % 10;
            carry = sum/10;

            ListNode *newnode= new ListNode(digit);
            tail->next=newnode;
            tail=newnode;
           
            l2=l2->next;
        }

        if(carry!=0){
            ListNode *newnode= new ListNode(1);
            tail->next=newnode;
            tail=newnode;
        }
        ListNode* result=head->next;
        delete head;
        return result;
    }
};