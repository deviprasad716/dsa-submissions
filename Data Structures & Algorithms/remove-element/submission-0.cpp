class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        for(int num:nums){
            if(num!=val){
                temp.push_back(num);
            }
        } 
        int i=0;
        for(int num:temp){
            nums[i]=num;
            i++;
        }
        return i;
    }
};