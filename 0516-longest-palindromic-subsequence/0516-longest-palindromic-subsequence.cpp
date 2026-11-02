class Solution {
public:
    int t[1001][1001];
    int helper(string &s, string&s2, int m,int n){
      if(m==0 || n==0) return 0;
      if(t[m][n]!=-1)return t[m][n];
      if(s[m-1]==s2[n-1]) return 1+helper(s,s2,m-1,n-1);
      else return t[m][n]=max(helper(s,s2,m,n-1),helper(s,s2,m-1,n));   
    }
    int longestPalindromeSubseq(string s) {
        memset(t,-1,sizeof(t));
        string s2=s;
        reverse(s2.begin(),s2.end());
        int m= s.size();
        int n=s2.size();
        return helper(s,s2,m,n);
       
       
    }
};