class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size(); i++)
        {
            int count = 0;
            if(mp.contains(nums[i]))
            {
                mp[nums[i]]++;
                return true;
            }
            else
            {
                mp[nums[i]] = 1;
            }
        }
        return false;
    }
};