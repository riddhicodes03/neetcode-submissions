class Solution {
public:
    int findMin(vector<int> &nums) {
        int minVal = INT_MAX;
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
       int mid = (l+r)/2;
 
       minVal = min(minVal, nums[mid]);

       if(nums[r]<nums[mid])
       l=mid+1;
       else
       r=mid-1;
    }
        return minVal;
    }
};
