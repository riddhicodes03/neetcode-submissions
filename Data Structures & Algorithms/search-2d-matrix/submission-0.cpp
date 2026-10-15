class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l1=0;
        int l2=0;
        int h1=m-1;
        int h2=n-1;
        while(n*l1+l2 <= n*h1+h2){
            int mid = ((n*l1+l2)+(n*h1+h2))/2;
            int m1= mid/n;
            int m2=mid%n;
            if(matrix[m1][m2]==target)
            return true;
            else if(matrix[m1][m2]<target)
            {
                if(m2==n-1)
                {
                    l1=m1+1;
                    l2=0;
                }
                else{
                    l1=m1;
                    l2=m2+1;
                }
            } 
            else{
                if(m2==0){
                    h1=m1-1;
                    h2=n-1;
                }else{
                    h1=m1;
                    h2=m2-1;
                }
            }
        }
        return false;
    }
};
