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
    int pairSum(ListNode* head) {
        deque<int> dq;
        ListNode* t = head;

        while(t){
            dq.push_back(t->val);
            t = t->next;
        }

        int ans = INT_MIN;

        while(!dq.empty()){
            int m = dq.front()+dq.back();
            ans = max(ans, m);
            dq.pop_front();
            dq.pop_back();
        }

        return ans;
    }
};