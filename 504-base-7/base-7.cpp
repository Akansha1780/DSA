class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
        return "0";

        bool isNegative=num<0;
        num=abs(num);
        string result=""; // empty string

        while(num>0){
            result=result+to_string(num%7);
            num=num/7;
        }
        if(isNegative){
            result= result + "-";
        }
        reverse(result.begin(), result.end());
        
        return result;
    }
};