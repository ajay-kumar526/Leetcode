//Recursion
// class Solution {
// public:
//     int helper(vector<int>& nums,int n){
//      //Base case smallest valid input jab ghar hi nhi honge to 0 rupay milega
//         if(n==0)return 0;
//         if(n==1)return nums[0];
//         if(n==2)return max(nums[0],nums[1]);
//         return max(nums[n-1]+helper(nums,n-2),helper(nums,n-1));
//     }
//     int rob(vector<int>& nums) {
//         int n=nums.size();
//         return helper(nums,n);
//        }
// };

//Memoization(recursion+storage);
// class Solution {
// public:
//     int t[101];
//     int helper(vector<int>& nums,int n){
//      //Base case smallest valid input jab ghar hi nhi honge to 0 rupay milega
//         if(n==0)return 0;
//         if(n==1)return nums[0];
//         if(n==2)return max(nums[0],nums[1]);
//         if(t[n]!=-1)return t[n];
//         return  t[n]=max(nums[n-1]+helper(nums,n-2),helper(nums,n-1));
//     }
//     int rob(vector<int>& nums) {
//         memset(t,-1,sizeof(t));
//         int n=nums.size();
//         return helper(nums,n);
//        }
// };

//Tabulation
// class Solution {
// public:
//     int t[101];
//     int helper(vector<int>& nums,int n){
//      //Base case smallest valid input jab ghar hi nhi honge to 0 rupay milega
//         if(n==0)return 0;
//         if(n==1)return nums[0];
//         t[1]=nums[0];
//         t[2]=max(nums[0],nums[1]);
//         for(int i=3;i<n+1;i++){
//            t[i]=max(nums[i-1]+t[i-2],t[i-1]); 
//         }
//         return  t[n];
//     }
//     int rob(vector<int>& nums) {
//         int n=nums.size();
//         return helper(nums,n);
//        }
// };

//Space optimization code
class Solution {
public:
   int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        int prev2=nums[0];
        int prev1=max(nums[0],nums[1]);
        for(int i=3;i<n+1;i++){
            int curr=max(nums[i-1]+prev2,prev1); 
            prev2=prev1;
            prev1=curr;
           
        }
        return prev1;
       }
};

