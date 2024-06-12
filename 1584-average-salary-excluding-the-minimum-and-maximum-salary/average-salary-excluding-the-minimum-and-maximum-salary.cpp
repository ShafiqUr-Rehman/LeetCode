class Solution {
public:
    double average(vector<int>& salary) {    
     sort(salary.begin(),salary.end());
        double sum = 0;
        int count =0;
        double avg = 0.0; //Perform calculations using floating-point arithmetic to maintain precision.
        for(int i=1;i<salary.size()-1;i++){
            sum=sum+salary[i];
            count++;
        };     
        avg = sum/count;
        return avg;
    };
};