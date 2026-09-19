class Solution {
public:
    int reverse(int x) {
        if(x== INT_MIN) return 0;

        string s= to_string(abs(x));
        std::reverse(s.begin(), s.end());

        try{
            int rev=stoi(s);

            return(x<0) ?-rev : rev;
        }
        catch(const out_of_range& e){
            return 0;
    
        }
        
    }
};