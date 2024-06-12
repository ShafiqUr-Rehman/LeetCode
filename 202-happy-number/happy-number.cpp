class Solution {
    private:
    int cal(int n){
    int sum=0;
  while(n!=0){
        
        int rem=n%10;
        sum+=rem*rem;
        n/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
    unordered_set<int>s;
      while(n!=1 && !s.count(n)){
        s.insert(n);
        n=cal(n);
      }
        return n==1;
    }
};