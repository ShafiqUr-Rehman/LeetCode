class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> StringS;
        stack<char> StringT;

        for(char ch : s){
            if(ch == '#'){
                if(!StringS.empty()){
                    StringS.pop();
                }
            }else{
                StringS.push(ch);
            }
        }


        for(char ch : t){
            if(ch == '#'){
                if(!StringT.empty()){
                    StringT.pop();
                }
            }else{
                StringT.push(ch);
            }
        }

        return StringS == StringT; 
    }
};
