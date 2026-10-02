class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<=j){
            while(s[i]==' '|| !isalnum(s[i]))
            i++;
            while(s[j]==' '|| !isalnum(s[j]))
            j--;
            if(tolower(s[i])!=tolower(s[j]) && i<=j)
            return false;
            i++;
            j--;
        }
        return true;
    }
};
