class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); ++i) {
            indexedNums.push_back({nums[i], i});
        }
        sort(indexedNums.begin(), indexedNums.end());
        int left = 0;
        int right = indexedNums.size() - 1;
        while(indexedNums[left].first + indexedNums[right].first != target)
        {
            int sum = indexedNums[left].first + indexedNums[right].first;
            if(sum > target)
            {
                right--;
            }
            else if(sum < target)
            {
                left++;
            }
        }
        int i = indexedNums[left].second;
        int j = indexedNums[right].second;
        return {min(i, j), max(i, j)};
    }
};
