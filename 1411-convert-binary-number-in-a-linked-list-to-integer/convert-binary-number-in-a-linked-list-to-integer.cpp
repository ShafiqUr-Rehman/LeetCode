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
    int getDecimalValue(ListNode* head) {
        int res = 0;  // Initialize result
        while (head) {  // Traverse the linked list
            res = (res << 1) | head->val;  // Shift left and add current node's value
            head = head->next;  // Move to the next node
        }
        return res;  // Return the decimal value
    }
};
