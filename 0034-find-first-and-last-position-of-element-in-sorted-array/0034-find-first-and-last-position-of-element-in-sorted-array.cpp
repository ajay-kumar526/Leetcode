class Solution {
public:


 int FirstOccurence(vector<int>& nums,int target){
      int n=nums.size();
        int low=0,high=n-1;
        int first=-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(nums[mid]==target){
             first=mid;
             high=mid-1;
             }
            else if(nums[mid]<target){
              low=mid+1 ;}
             else{high=mid-1;}
            
        }

        return first;
    
}
int LastOccurence(vector<int>& nums,int target){
    int n=nums.size();
        int low=0,high=n-1;
        int last=-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(nums[mid]==target){

             low=mid+1;
             last=mid;
             }
             else if(nums[mid]<target){low=mid+1;}
             else{high=mid-1;}
            
        }
        return last;
    

}
  vector<int> searchRange(vector<int>& nums, int target) {
    int lb = FirstOccurence(nums, target);
    if (lb == -1) return {-1, -1};

    int rb = LastOccurence(nums, target);
    return {lb, rb};
}
};
