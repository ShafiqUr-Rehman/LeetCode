class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        {return false;}
        
        while(n%2!=1){
            n/=2;
        };
        return n==1;
    };
};