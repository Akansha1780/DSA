class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> f;
        int i;
        int n=s.size();
        for(i=0;i<n;i++){
            f[s[i]]++;
        }
         
        bool odd=false;

        int result=0;
        for(auto i:f){
            int val=i.second;
            if(val%2==0)
            result+=val;
            else
            odd=true;
        }

        
        for(auto i:f){
            int val=i.second;
            if(val%2==1)
            result+=val-1;
        }

        if(odd)
        return result+1;

        return result;
    }
};