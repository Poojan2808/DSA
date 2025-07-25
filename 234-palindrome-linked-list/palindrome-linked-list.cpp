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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        ListNode* slow = head;
        ListNode* fast = head;
        stack<int> s;

        // Push first half into stack
        while (fast && fast->next) {
            s.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }

        // Skip middle node for odd-length list
        if (fast) slow = slow->next;

        // Compare second half with stack
        while (slow) {
            if (s.top() != slow->val) return false;
            s.pop();
            slow = slow->next;
        }

        return true;
    }
};
