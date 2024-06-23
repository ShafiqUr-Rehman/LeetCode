class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) {
            return nullptr;
        }

        // Calculate the length of both lists
        int lenA = 0, lenB = 0;
        ListNode *currentA = headA;
        ListNode *currentB = headB;

        while (currentA) {
            lenA++;
            currentA = currentA->next;
        }

        while (currentB) {
            lenB++;
            currentB = currentB->next;
        }

        // Align the start points
        currentA = headA;
        currentB = headB;

        if (lenA > lenB) {
            for (int i = 0; i < lenA - lenB; ++i) {
                currentA = currentA->next;
            }
        } else {
            for (int i = 0; i < lenB - lenA; ++i) {
                currentB = currentB->next;
            }
        }

        // Traverse both lists together to find the intersection
        while (currentA != currentB) {
            currentA = currentA->next;
            currentB = currentB->next;
        }

        return currentA;
    }
};