class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        //create frequency array 
        int freq[26]; //because there are only 26 lowercase characters
        
        for(int i = 0; i < s.length() ; i++)
        {
            freq[s[i] - 'a']++;  // increment count of the character found at string s
            freq[t[i] - 'a']--; //decrement count of character found at string t

        }

        for(int val : freq) //if only the freq array is empty, w
        {
            if(val != 0)
            {
                return false;
            }
        }

        return true;

    }
};
