class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n=nums.size();
        int count=0;
        
        unordered_map<int, int>a;
        for(int i=0;i<n;i++){
            a[nums[i]]++;

        }

        int floor=n/2;
        
        for(auto it:a){
            if(it.second>floor)
            return it.first;
        }
        return 1;
        
    }
};