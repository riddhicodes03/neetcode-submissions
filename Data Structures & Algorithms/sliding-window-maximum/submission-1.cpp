class Solution {
public:
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;          // stores indices, values decreasing front to back
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            // 1. remove front if it slid out of the window
            if (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            // 2. remove smaller elements from the back
            while (!dq.empty() && nums[dq.back()] <= nums[i])
                dq.pop_back();

            dq.push_back(i);

            // 3. first full window ends at index k-1
            if (i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};

