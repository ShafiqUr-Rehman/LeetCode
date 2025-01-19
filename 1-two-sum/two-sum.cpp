class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); ++i) {
            int a = target - nums[i];

     if (map.find(a) != map.end()) {
                return {map[a], i};
            };
            // Store current number and its index in the hashmap
            map[nums[i]] = i;   // both are index
        };
        // If no solution found, return an empty vector
        return {};
    };
};


// firstly hashmap is empty ;
// it store the values one by one;
//if it finds the value that is already exists it is guarentee that thier sum will be equal to target