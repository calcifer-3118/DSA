class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            unordered_set<int> hm;
            int maxCount=0;
    
            for(int i=0; i<nums.size(); i++)
                hm.insert(nums[i]);
    
            for(auto i:hm)
                if(!hm.count(i-1))
                {
                    int length=0;
                    while(hm.count(i + length))
                            length++;
                    maxCount = max(maxCount, length);   
                }    
    
            return maxCount;
        }
    };