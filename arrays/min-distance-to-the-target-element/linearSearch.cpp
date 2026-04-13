class Solution {
    public:
        int getMinDistance(vector<int>& nums, int target, int start) {
            int minVal = INT_MAX;
            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i] == target)
                {
                    minVal = min(minVal, abs(i-start));
                }
            }
    
            return minVal == INT_MAX ? 0 : minVal;
            
        }
    };