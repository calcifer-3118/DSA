class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        if(nums.size() <= 1)
            return {nums[0]};

        unordered_map<int, int> hm;
        for(int i=0; i<nums.size(); i++)
            hm[nums[i]]++;
        

        vector<pair<int, int>> v;
        for(auto i:hm)
        {
            v.push_back({i.first, i.second});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        vector<int> result;
        for(int i=0; i<k; i++)
        {
            result.push_back(v[i].first);
        }

        return result;

    }
};