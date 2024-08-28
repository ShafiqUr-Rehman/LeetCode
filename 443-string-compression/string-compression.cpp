class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,  j=0;
        while(i<chars.size()){
           char currentCurr = chars[i];
           int counter = 0;
            while(i < chars.size() && chars[i]==currentCurr ){
                i++;
                counter++;
            };
            chars[j++] = currentCurr;
            if(counter > 1){
                for(char c : to_string(counter) ){
                    chars[j++] = c;
                }
            }
        };
        return j;        
    }
};