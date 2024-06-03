class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> complementMap;

        for (int i = 0; i < nums.size(); ++i) {
           // a= target -b     =>   a+b = target
            int a = target - nums[i];

     if (complementMap.find(a) != complementMap.end()) {
                return {complementMap[a], i};
            };
            // Store current number and its index in the hashmap
            complementMap[nums[i]] = i;   // both are index
        };


        // If no solution found, return an empty vector
        return {};
    };
};


// firstly hashmap is empty ;
// it store the values one by one;
//if hi finds the value that is already exixts it is gurnatee that thier sum will br equal to target