class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        //iterate through array and put the diff into hashmap
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int diff = target - nums[i];
            if(mp.find(diff) != mp.end())
            {
               return{mp[diff],i};
            }
            mp[nums[i]] = i;
            //return ans;
        }
        return ans;
    }
};
