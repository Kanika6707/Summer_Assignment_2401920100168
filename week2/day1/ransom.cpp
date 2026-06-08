class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mr;
        unordered_map<char,int>mm;

        for(char ch:ransomNote){
            mr[ch]++;
        }
        for(char ch:magazine){
            mm[ch]++;

        }
        for(auto it:mr){
            if(mm[it.first]<it.second)
            return false;
        }
        return true;

        
    }
};