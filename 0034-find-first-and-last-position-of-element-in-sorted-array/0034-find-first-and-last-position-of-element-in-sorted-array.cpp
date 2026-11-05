class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //binary search+ res
        int res1=-1,res2=-1;
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                //return mid; //first occurence hai toh left me dekho
                res1=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                     high=mid-1;
            }
            else{
                  low=mid+1;
            }
        }
         low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                //return mid; //first occurence hai toh left me dekho
                res2=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                     high=mid-1;
            }
            else{
                  low=mid+1;
            }
        }
        return{res1,res2};
    }
};