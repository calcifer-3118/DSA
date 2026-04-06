class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        if (nums.size() <= 1)
            return {nums[0]};

        unordered_map<int, int> hm;
        for (int i = 0; i < nums.size(); i++)
            hm[nums[i]]++;

        vector<vector<int>> bucket(nums.size() + 1);
        for (auto &p : hm)
        {
            bucket[p.second].push_back(p.first);
        }

        vector<int> result;
        for (int i = bucket.size() - 1; i >= 0; i--)
        {
            for (int num : bucket[i])
            {
                result.push_back(num);
                if (result.size() == k)
                {
                    return result;
                }
            }
        }

        return {};
    }
};