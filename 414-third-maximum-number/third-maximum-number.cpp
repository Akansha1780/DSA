class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> p;


        for (int i = 0; i < nums.size(); i++) {
            p.insert(nums[i]);
        }
        nums.clear();

        for (auto it:p) {
            nums.push_back(it);
        }

        sort(nums.begin(), nums.end());
         int n=nums.size();
        

        if(n>2)
        return nums[n-3];

        else
        return nums[n-1];
    }
};