class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> seen;
        for(int i=0;i<n;i++){
            int required=target-nums[i];
            if(seen.find(required)!=seen.end()){
                ans={seen[required],i};
            }
            seen[nums[i]]=i;
        }
        return ans;
    }
};
