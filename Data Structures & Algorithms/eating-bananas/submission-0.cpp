class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxPile=0;

        for(int i=0;i<n;i++)
        maxPile = max(maxPile,piles[i]);
       int  l =1, r= maxPile;
       int res = r;

     while(l<=r){
      int k = (l+r)/2;
      int hours = 0;
       for(int i= 0;i<n;i++)
       hours+=(piles[i]+k-1)/k;
      
     if(hours<=h){
         res = min(k,res);
        r=k-1;
       }
     else
     l=k+1;
    }
    return res;
    }
};
