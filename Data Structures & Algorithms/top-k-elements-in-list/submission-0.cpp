class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        //create hashmap to store the frequency of the array elements
        unordered_map<int,int> record;
        for(auto &n : nums)
        {
            record[n] = record[n] + 1;
        }

        /*we store the values that have the same frequency in a vector together. we take all these vectors store them in another vector. 
        ans[1] holds all the elements that has freuency 1  */

        vector<vector<int>> freq(nums.size()+1); //the frequency cant be more than size of nums. we are taking frequency as index (concept of bucket sort)

        for(auto &entry : record)
        {
            freq[entry.second].push_back(entry.first);
        }

        vector<int> res;

        //iterating from behind to get the highest frequency first
        for(int i = freq.size()-1 ; i > 0; i--)
        {
            for(int n : freq[i])
            {
                res.push_back(n);
                if(res.size() == k)
                {
                    return res;
                }
            }
        }
        return res;
    }
};
