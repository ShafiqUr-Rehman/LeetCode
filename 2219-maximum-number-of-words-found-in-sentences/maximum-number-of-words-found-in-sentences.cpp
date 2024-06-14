class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
          int max_length=0;
        for(const auto &s : sentences)
        {
            int length = count(s.begin(),s.end(),' ');
            max_length = max(max_length,length+1);  // length+1 to include the last word of s
        }
        return max_length;
        
    }
};