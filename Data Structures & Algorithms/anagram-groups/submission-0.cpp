class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)  {
        //take key as frequency string and value as all the anagrams of that string
        unordered_map <string,vector<string>> record;
        for(string s : strs)
        {
            //creates vector of 26 intergers with initial value 0
            vector<int> count(26,0);
            for(char c : s)
            {
                count[c - 'a']++; //increases the frequency of the char c index
            }

            //converts the frequency array to string
            string key = to_string(count[0]);
            for(int i = 1; i < 26; i++)
            {
                key = key + ',' + to_string(count[i]);
            }

            record[key].push_back(s);  //records string s as value against key(frequency string)     

        }

        vector<vector<string>> result;

        for(auto pair : record)
        {
            result.push_back(pair.second); //second means the value, not the key
        }

        return result;

    }
};
