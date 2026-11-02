class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> frequency;
        int maxEl=nums[0];
        for(int i=0;i<nums.size();i++){
            frequency[nums[i]]++;
        }
        for(const auto& pair:frequency){
            if(pair.second>(n/2)){
                maxEl=pair.first;
            }
        }
        return maxEl;
    }
};