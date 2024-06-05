class Solution {
public:
    string multiply(string num1, string num2) {
    int m = num1.size();
    int n = num2.size();
    vector<int> result(m + n, 0); // Initialize a vector to store the result digits

    // Multiply each digit of num1 with each digit of num2 and update the result vector
    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1]; // Add the current product to the existing value in result
            result[i + j] += sum / 10; // Update carry
            result[i + j + 1] = sum % 10; // Update current digit
        }
    }

    // Convert the result vector to a string
    string res;
    for (int digit : result) {
        // Skip leading zeros
        if (!(res.empty() && digit == 0)) {
            res.push_back(digit + '0');
        }
    }

    return res.empty() ? "0" : res;
}
};