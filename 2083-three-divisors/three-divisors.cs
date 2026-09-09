public class Solution {
    public bool IsThree(int n) {
        int divisorcount=0;

        if(n==0) return false;

        for(int i=1;i<=n;i++){
            if(n%i==0){
                divisorcount++;
            }
        }   
        return divisorcount==3;
    }
}