class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currCnt=nums[0];
        int maxCnt=nums[0];

        for(int i =1;i<nums.size();i++){
         currCnt=max(nums[i],currCnt+nums[i]);
         maxCnt=max(currCnt,maxCnt);
        }
        return maxCnt;

    }
};