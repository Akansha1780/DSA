class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k<=0) return 0;

        int totalcount=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            long long currentproduct=1;

            for(int j=i;j<n;j++){
                currentproduct *=nums[j];

                if(currentproduct >=k){
                    break;
                }
                totalcount++;
            }
        }
        return totalcount;

    }
};