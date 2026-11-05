class Solution {
public:
    int findMin(vector<int>& nums) {
       int min_val;
       int n=nums.size(); 
       int low=0,high=n-1;
       if(n==1) return nums[0];
      while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[low] < nums[high])
        return nums[low];
        int next=(mid+1) % n;
        int prev=(mid-1+n) % n;
        if(nums[prev]>nums[mid]&& nums[next]>nums[mid]){
           // min=mid;
            min_val=nums[mid];
            return min_val;
        }
        // left half sorted 
        else if(nums[mid]>=nums[low]){
              low=mid+1;
        }
        //right half sorted
        else high=mid-1;
      }
      return -1;  
    }
};