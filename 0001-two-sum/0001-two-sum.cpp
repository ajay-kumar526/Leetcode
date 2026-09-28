class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        int firstindex=-1;
        int secondindex=-1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]== target){firstindex=i;secondindex=j;}
            }
        }
        return {firstindex,secondindex};
    }
};