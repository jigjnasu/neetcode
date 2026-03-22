#include <bits/stdc++.h>

/*
    Contains Duplicate
    Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.
    Example 1:
    Input: nums = [1,2,3,1]
    Output: true

    Example 2:
    Input: nums = [1,2,3,4]
    Output: false
*/

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::unordered_map<int, bool> d;
        for (int &n : nums) {
            const auto &pos = d.find(n);
            if (pos != d.end())
                return true;
            d[n] = true;
        }
        return false;
    }
};

int main() {
    Solution s;
    std::vector<int> v1 = {1, 2, 3, 1};
    std::vector<int> v2 = {1, 2, 3, 4};

    assert(s.hasDuplicate(v1) == true);
    assert(s.hasDuplicate(v2) == false);
    return 0;
}