
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        while (low < high) {  // Use 'low < high' for binary search
            int mid = low + (high - low) / 2;  // Prevent potential overflow
            
            if (nums[low] < nums[high]) {
                return nums[low];  // Array is already sorted
            }
            
            if (nums[mid] < nums[high]) {
                high = mid;  // Minimum could be at mid
            } else {
                low = mid + 1;  // Minimum must be in the right part
            }
        }
        return nums[low];  // At the end, low == high
    }
};