class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
             unordered_map<string, vector<string>> hm;
    
            for(auto i:strs)
            {
                string key(26, 0); //max word length 255 since char is '8' bit
                for(auto c:i)
                    key[c - 'a']++;
    
                hm[key].push_back(i);
            }
    
            vector<vector<string>> result;
            for(auto i:hm)
            {
                result.push_back(i.second);
            }
    
            return result;
        }
    };