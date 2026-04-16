class Solution {
    public:
        bool isPalindrome(string s) {
            string newStr = "";
            for(auto &c:s)
                if(isalnum(c))
                    newStr += tolower(c);
    
            string rev = string(newStr.rbegin(), newStr.rend());
            return newStr == rev;
        }
    };
    