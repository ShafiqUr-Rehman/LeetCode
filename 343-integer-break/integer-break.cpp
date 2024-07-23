class Solution {
public:
    int integerBreak(int n) {

    if (n == 2) return 1;
    if (n == 3) return 2;
    if (n == 4) return 4;

    int product = 1;
    while (n > 4) {
        product *= 3;
        n -= 3;
    }
    product *= n; // n will be either 2, 3, or 4 here
    return product;
}
};