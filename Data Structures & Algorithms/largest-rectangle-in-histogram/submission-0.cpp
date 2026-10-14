class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         int n  = heights.size();
        stack<int>st;
        vector<int>prefix(n);
        vector<int>suffix(n);
        int maxRect = 0;
        for(int i = 0; i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i])
            st.pop();
            prefix[i]= st.empty()?heights[i]*(i+1):heights[i]*(i-st.top());
            st.push(i);
        } 
        
        while(!st.empty())
        st.pop();

       for(int i = n-1; i>=0;i--){
        while(!st.empty() && heights[st.top()]>=heights[i])
        st.pop();
        int leftRect = st.empty()?heights[i]*(n-i):heights[i]*(st.top()-i);
        st.push(i);
        int rect = (prefix[i]+leftRect)-heights[i];
        maxRect = maxRect < rect ? rect : maxRect;
       }
      
    return maxRect;
    }
};
