class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>>bucket(nums.size()+1);
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i : nums)
            mp[i]++;
        
        for(auto it = mp.begin(); it!=mp.end();++it)
            bucket[it->second].push_back(it->first);

        
        for(int i=nums.size();i>=0&&(int)ans.size()<k;i--){
         if(bucket[i].empty())
         continue;
         for(int j : bucket[i]){
         ans.push_back(j);
         }
         
        }
        return ans;
    }
};
