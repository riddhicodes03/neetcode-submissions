class Solution {
public:
    int maxArea(vector<int>& height){
        if(height.size()==0)
        return 0;

        int left = 0;
        int right = height.size()-1;
        int maxWater = 0;
        int distance = right-left;

        while(right>left){
          int water = min(height[right],height[left])*distance;
          if(water>maxWater){
            maxWater = water;
          }
           if(height[right]<height[left])
            right--;
            else
            left++;

            distance--;
        }
        return maxWater;

    }
};
