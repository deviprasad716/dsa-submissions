class Solution {
public:
    void sortColors(vector<int>& nums) {
        int noOfZeros=0;
        int noOfOnes=0;
        int noOfTwos=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                noOfZeros++;
            }else if(nums[i]==1){
                noOfOnes++;
            }else{
                noOfTwos++;
            }
        }
        for(int i=0;i<n;i++){
            if(i<noOfZeros){
                nums[i]=0;
            }else if(i<noOfZeros+noOfOnes){
                nums[i]=1;
            }else{
                nums[i]=2;
            }
        }
    }
};