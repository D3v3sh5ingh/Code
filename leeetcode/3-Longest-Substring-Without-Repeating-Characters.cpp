class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<int> LastIndex(256, -1);
        int i=0;
        int res = 0;
        for(int j=0;j<n;j++)
        {
            i = max(i, LastIndex[s[j]]+1);
            res = max(res, j - i + 1);
            LastIndex[s[j]] = j;
        }
        return res;
    }
};
