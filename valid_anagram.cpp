#include <bits/stdc++.h>

/*
    Valid Anagram
    Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.
    An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

    Example 1:
    Input: s = "racecar", t = "carrace"
    Output: true

    Example 2:
    Input: s = "jar", t = "jam"
    Output: false
*/

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::vector<int> v1(26, 0);
        std::vector<int> v2(26, 0);
        if (s.size() != t.size()) return false;
        for (std::size_t i = 0; i < s.size(); ++i) {
            v1[int(s[i]) - int('a')]++;
            v2[int(t[i]) - int('a')]++;
        }

        for (std::size_t i = 0; i < v1.size(); ++i)
            if (v1[i] != v2[i])
                return false;
        return true;
    }
};

int main() {
    Solution s;
    std::string s1 = "racecar";
    std::string t1 = "carrace";
    assert(s.isAnagram(s1, t1) == true);

    std::string s2 = "jar";
    std::string t2 = "jam";
    assert(s.isAnagram(s2, t2) == false);

    return 0;
}