class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
      vector<int>arr1;
      vector<int>arr2;
      vector<int>arr3;
      arr1.push_back(nums[0]);
      arr2.push_back(nums[1]);
      for(int i=2;i<nums.size();i++){
         if(arr1[arr1.size()-1]>arr2[arr2.size()-1]){
            arr1.push_back(nums[i]);
         }
         else{arr2.push_back(nums[i]);}
      }
     for(int x:arr1){
        arr3.push_back(x);
     }
      for(int y:arr2){
        arr3.push_back(y);
     }

     return arr3;

    }
};