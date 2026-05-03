class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;
        
        int Lmax = 0;
        int rmax = 0;
        int total = 0;
        int l = 0; 
        int r = n - 1;

        while(l <= r) {
            
            if(height[l] <= height[r]) {
                if(height[l] >= Lmax) {
                    Lmax = height[l];
                } else {
                    
                    total += Lmax - height[l];
                }
                l++; 
                }
            else {
                if(height[r] >= rmax) {
                    rmax = height[r];
                } else {
                    
                    total += rmax - height[r];
                }
                r--; 
            }   
        }
        return total;
    }
};