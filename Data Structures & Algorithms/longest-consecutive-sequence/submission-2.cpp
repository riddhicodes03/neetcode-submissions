class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)
        return nums.size();

        unordered_set<int>hash;
        int max_count = 0;
        for(int i=0;i<nums.size();i++)
        hash.insert(nums[i]);
        for(int num:hash){
        int count = 1;
            if(!hash.contains(num-1)){
                
                int j = num;
                while(hash.contains(j+1)){
                    count+=1;
                    j++;
                }
            }
            max_count=max(max_count,count);
        }
        return max_count;
    }
};
