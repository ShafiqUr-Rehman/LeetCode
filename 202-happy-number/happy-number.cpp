class Solution {
    private:
    int cal(int n){
    int sum=0;
  while(n!=0){
        
        int rem = n % 10;  // Get the last digit
        sum += rem * rem;  // Add the square of the last digit to sum
        n /= 10;           // Remove the last digit
        }
        return sum;
    }
public:
    bool isHappy(int n) {
   unordered_set<int> s;
   //Continue the loop until n becomes 1 (indicating a happy number) or n is found in the set (indicating a cycle).
    while (n != 1 && !s.count(n)) {
        s.insert(n);   // Insert current number into the set
        n = cal(n);    // Calculate the next number in the sequence
    }
    return n == 1;
    }
};