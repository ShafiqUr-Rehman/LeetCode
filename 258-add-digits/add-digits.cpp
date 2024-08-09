class Solution {
public:
    int addDigits(int num) {
        int rem=0,sum=0;
        while(num!=0)
        {
            rem=num%10;
            sum=sum+rem;
            num=num/10;
        }
       if(sum%10!=sum)
       return addDigits(sum);

       return sum;
    }
};