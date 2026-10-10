class Solution {
public:
    string minWindow(string s, string t) {
        int l=0;
        int r=0;
        int freq[256]={0};
        int sIndex=-1;
        int minLength=INT_MAX;
        int count=0;
        int m = s.length();
        int n = t.length();
        for(int i=0;i<t.length();i++)
        freq[t[i]]++;

        while(r<s.length()){
          if(freq[s[r]]>0)
          count+=1;   
          freq[s[r]]--;
          while(count==n){
           if(minLength>r-l+1){
            minLength=r-l+1;
            sIndex=l;
           }
           freq[s[l]]++;

           if(freq[s[l]]>0)
           count--;

           l++;
          }
          r++;          
        }
      if(sIndex==-1)
      return "";
      else
      return s.substr(sIndex,minLength);
    }
};
