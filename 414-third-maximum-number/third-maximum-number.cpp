class Solution {
public:
    int thirdMax(vector<int>& nums) {

        unordered_set<int> a;

        for(int i=0;i<nums.size();i++){
            a.insert(nums[i]);
        }
            nums.clear();

        for(auto it:a){
            nums.push_back(it);
        }
        int n=nums.size();
        sort(nums.begin(), nums.end());

        
            if(n>2)
            return nums[n-3];

            else
            return nums[n-1];
    
        
        
    }
};