class Solution {
    public:
        int minimumDistance(vector<int>& nums) {
            unordered_map<int, vector<int>> hm;
            for(int i=0; i<nums.size(); i++)
                hm[nums[i]].push_back(i);
    
            int minDistance = INT_MAX;
            for(auto &i:hm)
            {
                if(i.second.size() < 3 ) continue;
                for(int j=0; j<i.second.size()-2; j++)
                {   
                    int first=i.second[j];
                    int second=i.second[j+1];
                    int third=i.second[j+2];
                    int distance = abs(first - second) + abs(second - third) + abs(third-first);
                    minDistance = min(minDistance, distance);    
                }
    
            }    
    
            return minDistance == INT_MAX ? -1 : minDistance;
        }
    };