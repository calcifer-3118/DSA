class Solution {
    public:
        bool isAnagram(string s, string t) {
           if(s.length() != t.length())
                return false;
    
            unordered_map<char, int> hm1;
            unordered_map<char, int> hm2;
    
            for(auto i:s)
                hm1[i]++;
            for(auto i:t)
                hm2[i]++;
            
            return hm1 == hm2;
        }
    };