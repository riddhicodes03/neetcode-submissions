class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
      unordered_map<char,int>m1;
      unordered_map<char,int>m2;
      for(char c : s)
      m1[c]++;
      for(char c : t)
      m2[c]++;
      if(m1==m2)return true;
      else return false;
    }
};
