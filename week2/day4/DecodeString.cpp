class Solution {
public:
    string decodeString(string s) {
        stack<int>countstack;
        stack<string>charstring;
        string curr="";
        int num=0;
        for(char ch:s){
            if(isdigit(ch)){
                num=num*10+(ch-'0');

            }
            else if(ch=='['){
                countstack.push(num);
                charstring.push(curr);
                num=0;
                curr="";
            }
            else if(ch==']'){
                int repeat=countstack.top();
                countstack.pop();
                string temp=curr;
                curr=charstring.top();
                charstring.pop();
                while(repeat--){
                    curr+=temp;
                }


            }
             else {
                curr += ch;
            }
        }
        return curr;
        
    }
};