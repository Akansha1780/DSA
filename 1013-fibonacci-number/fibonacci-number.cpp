class Solution {
public:
    int fib(int n) {
        if(n==1)
        return n;

        if(n==0)
        return n;

        int last=1;
        int secondlast=0;
        int ans=0;

        for(int i=2; i<=n;i++){
            ans=last+secondlast;
            
            secondlast=last;
            last=ans;
            

        }
        return ans;
        
    }
};