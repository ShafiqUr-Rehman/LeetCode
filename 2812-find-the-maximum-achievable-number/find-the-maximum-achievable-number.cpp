class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
      // Example  num = 4 and t=1(it means thar i can just increment or decrement just onr time)
      // let output => x = 6;
      // x-1 = 5  ...... num+1 = 5  true;
      
      //Another Example : num=3  and t=2 (i can use increment or decrement 2-Times)
      //x = 7    && num = 3 
      // 7-1 = 6  && 3+1 = 4
      // 6-1 =5  **  4+1 = 5;
      // now lets fint hte valus of x
      // x-t = num + t    (t menas times)
      // x=num + t + t;
      // x = num + 2t;

      return num + 2*t;  
    };
};