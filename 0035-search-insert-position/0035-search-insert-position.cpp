class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0; int end=nums.size()-1;
        int ans=nums.size();
        while(start<=end){
         int mid=start+(end-start)/2;
           if(target<=nums[mid]){
            ans= mid;
            end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
    return ans;
    }  
};