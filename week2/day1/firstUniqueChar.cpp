class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mf;
        for(char ele:s){
            mf[ele]++;
        }
        for(int i=0;i<s.size();i++){
        if(mf[s[i]]==1){
            return i;
        }
        }
        
        return -1;
        
    }
};