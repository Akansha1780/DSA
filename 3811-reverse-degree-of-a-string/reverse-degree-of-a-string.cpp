class Solution {
public:
    int reverseDegree(string s) {
        int total=0;

        for(int i=0;i<s.length();i++){
            int reversed_alpha_pos=26-(s[i]-'a');
            int p= (reversed_alpha_pos*(i+1));
            total=total+p;
        }
        
        

        return total;
        
    }
};