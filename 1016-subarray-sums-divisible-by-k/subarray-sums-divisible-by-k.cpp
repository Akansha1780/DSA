class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        int res=0;
        int n=nums.size();

        unordered_map<int,int>f;
        f[0]=1;

        for(int i=0;i<n;i++){
            sum+=nums[i];

            int ques=(sum % k + k) % k;
            int freq=f[ques];

            res=res+freq;

            //storing remainder 
            f[ques]++;
        }
        return res;
    }
};