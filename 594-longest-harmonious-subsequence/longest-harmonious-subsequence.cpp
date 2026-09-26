class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        int max_length=0;

        for(auto it:a){
            int key=it.first;
            int count=it.second;

            if(a.count(key+1)>0){
                max_length=max(max_length, count+a[key+1]);
            }
        }
        return max_length;
        
    }
};