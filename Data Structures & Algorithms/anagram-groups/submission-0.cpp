class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string&s : strs){
            int count[26]={0};
            for(char c : s)
            count[c-'a']++;

            string key;
            for(int i=0;i<26;i++)
            {
                if(count[i]!=0)
                {
                    key+=char('a'+ i);
                    key+=to_string(count[i]);
                }
            }
            mp[key].push_back(s);
        }
        vector<vector<string>> res;
        for(auto &[key,group]:mp)
        res.push_back(move(group));

        return res;
    }
};
