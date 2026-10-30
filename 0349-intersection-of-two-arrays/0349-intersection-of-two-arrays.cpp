class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
      int m=nums1.size();
      int n=nums2.size();
       int i=0;
       int j=0;
       set<int>ans;
       while(i<m && j<n){
        if(nums1[i]<nums2[j]){
           i++;
        }
        else if(nums1[i]>nums2[j]){
            j++;
        }
        else{
            ans.insert(nums2[j]);
            i++;
            j++;
        }
       } 
       return vector<int>(ans.begin(),ans.end());

    }
};
