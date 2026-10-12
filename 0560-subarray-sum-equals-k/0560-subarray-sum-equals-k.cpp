class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int presum=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int count=0;

        for(int i=0;i<nums.size();i++){
            presum+=nums[i];

           int remaining= presum-k;
            if(mp.find(remaining)!=mp.end()){
              count+=mp[remaining];
            }
            mp[presum]++;
        }
        return count;
      
    }
};