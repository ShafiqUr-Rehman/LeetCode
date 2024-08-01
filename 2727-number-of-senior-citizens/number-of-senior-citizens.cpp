class Solution {
public:
    int countSeniors(const vector<string>& details) {
        int NoPass = 0;
        
         for (const string& detail : details) {
            string ageStr = detail.substr(11, 2);
            int age = stoi(ageStr);
            if (age > 60) {
                NoPass++;
            }
        }
        
        return NoPass;
    }
};