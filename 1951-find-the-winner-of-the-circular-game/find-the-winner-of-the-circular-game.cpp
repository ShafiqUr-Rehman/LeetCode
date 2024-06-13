class Solution {
public:
     int soultion(int n,int k){
        if(n==1){return 0;}
         return (soultion(n-1,k)+k) % n;

     }
    int findTheWinner(int n, int k) {
        int ans=soultion(n,k)+1;
        return ans;

    }
};