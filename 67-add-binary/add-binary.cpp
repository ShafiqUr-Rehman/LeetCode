class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size();
        int m = b.size();
        int carry = 0;
        string result = "";

        int i = n - 1;
        int j = m - 1;

        while (i >= 0 || j >= 0 || carry == 1) {
            carry += (i >= 0 ? a[i--] - '0' : 0);
            carry += (j >= 0 ? b[j--] - '0' : 0);
            result = char(carry % 2 + '0') + result;
            carry /= 2;
        }

        return result;
    }
};