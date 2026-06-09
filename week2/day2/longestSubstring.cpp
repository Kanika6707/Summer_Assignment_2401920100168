class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>ms;
        int left=0; int maxLen=0;
        for(int right=0;right<s.size();right++){
            while(ms.count(s[right])){
                ms.erase(s[left]);
                left++;
            }
            ms.insert(s[right]);
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
        
    }
};