class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hash;
        vector<int>pair;
        for(int i=0;i<nums.size();i++)
         hash[nums[i]]=i;
        for(int i=0;i<nums.size();i++)
        {
            int x = target-nums[i];
            if(hash.count(x)&&hash[x]!=i)
            {
                pair.push_back(i);
                pair.push_back(hash[x]);
                
                break;
            }
            
        }
        return pair;
    }
};
