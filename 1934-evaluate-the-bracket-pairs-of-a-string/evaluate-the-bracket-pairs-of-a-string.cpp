class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> a;
        
        for(auto& pair:knowledge){
            a[pair[0]]=pair[1];
        }

        string ans="";
        string key="";

        bool inbracket=false;

        for(char c:s){
            if(c=='('){
                inbracket=true;
            }
            else if(c==')'){
                if(a.count(key)){
                    ans+=a[key];
                }
                else{
                    ans+="?";
                }
                key="";
                inbracket=false;
            }
            else{
                if(inbracket)
                key+=c;
                else
                ans+=c;
            }
        }
        return ans;

        
    }
};