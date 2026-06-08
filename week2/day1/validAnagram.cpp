class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>ma;
        unordered_map<char,int>mb;
        for(auto &ele:s){
            ma[ele]++;
        }
        for(auto &ele:t){
            mb[ele]++;
        }
        if(ma==mb){
            return true;
        }
        else
        return false;
        
        
    }
};