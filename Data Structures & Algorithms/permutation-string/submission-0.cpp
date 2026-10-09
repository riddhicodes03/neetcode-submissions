class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l = 0;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        
        for(int i=0; i<s1.length();i++)
        mp1[s1[i]]++;

        for(int r = 0; r<s2.length(); r++){
          mp2[s2[r]]++;
          if((r-l+1)==s1.length()){
            if(mp1==mp2)
            return true;
            else{
                if(mp2[s2[l]]==1)
                mp2.erase(s2[l++]);
                else
                mp2[s2[l++]]--; 
            }
              
           }
        } 
        return false;
    }
};
