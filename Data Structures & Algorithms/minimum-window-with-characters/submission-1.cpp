class Solution {
public:
    string minWindow(string s, string t) {
    int l = 0;
    int r = 0;
    int freq[256] = {0};
    int count = 0;
    int minLength = INT_MAX;
    int sIndex = -1;
    int m = s.size();
    int n = t.size();
    for(int i = 0;i<n;i++)
    freq[t[i]]++;
    for(int r = 0; r<m;r++){
        if(freq[s[r]]>0)
        count++;
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
    }
    if(sIndex==-1)
    return "";

    return s.substr(sIndex,minLength);
    }
};
