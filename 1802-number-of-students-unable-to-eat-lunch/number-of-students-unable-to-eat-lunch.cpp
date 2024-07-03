class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> s;
        queue<int> q;
        int counter = 0;
        reverse(sandwiches.begin(), sandwiches.end());

        for (int& ch : sandwiches) {
            s.push(ch);
        }
        for (int& que : students) {
            q.push(que);
        }

        while (!s.empty() && !q.empty()) {
            if (s.top() == q.front()) {
                s.pop();
                q.pop();
                counter = 0;
            } else {
                q.push(q.front());
                q.pop();
                counter++;
            }

            if (counter >= q.size()) {
                break;
            }
        }

        return q.size();
    }
};