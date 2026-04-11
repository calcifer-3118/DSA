class Solution{
    public:
        string encode(vector<string>& strs)
        {
            string encoded="";
            for(auto &i:strs) 
                encoded += to_string(i.length()) + "#" + i;
            return encoded;    
        }

        vector<string> decode(string s) 
        {
            int i=0;
            vector<string> result;
            while(i < s.length())
            {
                int j=i;
                while(s[j]!= '#')
                    j++;

                int length = stoi(s.substr(i, j-i));
                
                i = j+1;
                result.push_back(s.substr(i, length));
                i+=length;
            }

            return result;
        }

};