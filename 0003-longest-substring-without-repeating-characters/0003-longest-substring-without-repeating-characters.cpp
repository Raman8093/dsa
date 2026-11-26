class Solution {
public:
 int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> m;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        if (m.count(s[right]) && m[s[right]] >= left) {
            left = m[s[right]] + 1;
        }
        m[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }


    return maxLen;
}

};