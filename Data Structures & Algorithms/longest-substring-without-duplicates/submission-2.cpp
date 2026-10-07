class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        int maxCount=0;
        int i = 0;
        int j = i;
        unordered_set<char>hash;
        while(j<s.length()){
            if(hash.contains(s[j]))
            {
                while(i < s.length() && s[j]!=s[i])
                {
                    hash.erase(s[i]);
                    i++;
                }
                hash.erase(s[i]);
                i++;
            }
            else
            {
                hash.insert(s[j++]);
                count=j-i;
            }
            maxCount = count > maxCount ? count : maxCount;
        }
        return maxCount;
    }
};
