class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;

        int curr_max=nums[0];
        int curr_min=nums[0];

        int min_sum=nums[0];
        int max_sum=nums[0];

        int res=nums[0];
        

        for(int i=1;i<n;i++){
            curr_max=max(curr_max+nums[i], nums[i]);
            max_sum=max(max_sum, curr_max);

            curr_min=min(curr_min+nums[i], nums[i]);
            min_sum=min(min_sum, curr_min);
            
        }
        return max({0, max_sum, abs(min_sum)});

        
    }
};