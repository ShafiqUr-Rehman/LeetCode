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
        ListNode dummy;  // Dummy node to simplify edge cases
        ListNode* tail = &dummy;  // Pointer to the last node in the merged list
        
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        // Merge the lists
        while (curr1 != nullptr && curr2 != nullptr) {
            if (curr1->val < curr2->val) {
                tail->next = curr1;
                curr1 = curr1->next;
            } else {
                tail->next = curr2;
                curr2 = curr2->next;
            }
            tail = tail->next;  // Move the tail pointer forward
        }

        // Attach the remaining nodes
        if (curr1 != nullptr) {
            tail->next = curr1;
        } else if (curr2 != nullptr) {
            tail->next = curr2;
        }

        return dummy.next;  // Return the merged list, skipping the dummy node
    }
};
