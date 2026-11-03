class Solution {
public:
    int t[301][5001];
    int helper(vector<int>&coins,int n, int W){
      if(W == 0) return 1;
      if(n == 0) return 0;
       if(t[n][W]!=-1) return t[n][W];
       if(coins[n-1]<=W) return t[n][W]= helper(coins,n,W-coins[n-1])+helper(coins,n-1,W);
       else return t[n][W]=helper(coins,n-1,W);

    }
    int change( int amount,vector<int>& coins) {
        int n=coins.size();
        memset(t,-1,sizeof(t));
        return helper(coins,n,amount);
    }
};
