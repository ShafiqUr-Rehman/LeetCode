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
        int num = head->val;
        while (head->next != nullptr) {
            head = head->next;
            num = num * 2 + head->val;
        }
        return num;
    }
};




// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
//         int num = 0;  // Initialize result
//         while (head != nullptr) {  // Traverse the linked list
//             num = (num << 1) | head->val;  // Shift left and add current node's value
//             head = head->next;  // Move to the next node
//         }
//         return num;  // Return the decimal value
//     }
// };
