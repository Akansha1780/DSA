class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.length()!=s.size()) return false;

        s=s+s;
        int n=goal.size();
        for(int i=0;i<s.length();i++){
            if(s.substr(i,n)==goal)
            return true;
        }
        return false;
    }
};