/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
    let maxSum = nums[0]; // Initialize maxSum with the first element
    let currSum = nums[0]; // Initialize currSum with the first element

    for (let i = 1; i < nums.length; i++) {
        if (currSum < 0) {
            currSum = nums[i]; // Reset currSum to the current element if currSum is negative
        } else {
            currSum += nums[i]; // Add the current element to currSum if currSum is positive
        }

        if (currSum > maxSum) {
            maxSum = currSum; // Update maxSum if currSum is greater than maxSum
        }
    }

    return maxSum; // Return the maximum sum of the subarray
};
