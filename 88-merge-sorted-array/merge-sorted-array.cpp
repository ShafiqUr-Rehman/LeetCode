#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = m + n - 1; // size is les than by one
        m--; // as size is always one less than the total
        n--; 

        while (m >= 0 && n >= 0) {
            if (nums1[m] > nums2[n]) {
                nums1[size] = nums1[m];
                m--;
            } else {
                nums1[size] = nums2[n];
                n--;
            }
            size--;
        };
        
        while (n >= 0) {
            nums1[size] = nums2[n];
            n--;
            size--;
        }
    }
};
