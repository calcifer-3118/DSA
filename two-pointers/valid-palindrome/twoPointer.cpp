class Solution {
    public:
        bool isPalindrome(string s) {
            int left=0, right=s.length()-1;
    
            while(left < right)
            {
                if(!isAlphaNum(s[left]))
                    left++;
                else if(!isAlphaNum(s[right]))
                    right--;
                else{
                    if(tolower(s[left]) != tolower(s[right]))
                        return false;
                    left++;
                    right--;
                } 
            }
    
            return true;
        }
    
        bool isAlphaNum(char c)
        {
            return ( c >= 'A' && c <= 'Z' ||
                     c >= 'a' && c <= 'z' ||
                     c >= '0' && c <= '9');
        }
};