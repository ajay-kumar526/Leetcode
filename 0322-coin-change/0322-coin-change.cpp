class Solution {
public:
    //int t[13][10001];
    vector<vector<int>>t;
    int helper(vector<int>&coins,int n, int W){
      if(W == 0) return 0;
      if(n == 0) return INT_MAX-1;
       if(t[n][W]!=-1) return t[n][W];
       if(coins[n-1]<=W) return t[n][W]= min(1+helper(coins,n,W-coins[n-1]),helper(coins,n-1,W));
       else return t[n][W]=helper(coins,n-1,W);

    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        // memset(t,-1,sizeof(t));
        t.assign(n+1,vector<int>(amount+1,-1));
        int k= helper(coins,n,amount);
        
        if(k==INT_MAX-1)return -1;
        return k;
    }
};