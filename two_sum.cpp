#include <bits/stdc++.h>

/*
    Two Sum
    Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.
    You may assume that every input has exactly one pair of indices i and j that satisfy the condition.
    Return the answer with the smaller index first.

    Example 1:
    Input: 
    nums = [3,4,5,6], target = 7
    Output: [0,1]

    Example 2:
    Input: nums = [4,5,6], target = 10
    Output: [0,2]

    Example 3:
    Input: nums = [5,5], target = 10
    Output: [0,1]    
*/

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> d;
        std::vector<int> res(2, 0);
        for (std::size_t i = 0; i < nums.size(); ++i) {
            const int val = target - nums[i];
            const auto &pos = d.find(val);
            if (pos != d.end()) {
                res[0] = i;
                res[1] = d[val];
                break;
            } else {
                d[nums[i]] = i;
            }
        }
        std::sort(res.begin(), res.end());
        return res;
    }
};


int main() {
    Solution s;
    std::vector<int> v1 = {3,4,5,6};
    const std::vector<int> r1 = s.twoSum(v1, 7);
    assert(r1[0] == 0); assert(r1[1] == 1);

    std::vector<int> v2 = {4,5,6};
    const std::vector<int> r2 = s.twoSum(v2, 10);
    assert(r2[0] == 0); assert(r2[1] == 2);

    std::vector<int> v3 = {5, 5};
    const std::vector<int> r3 = s.twoSum(v3, 10);
    assert(r3[0] == 0); assert(r3[1] == 1);

    return 0;
}