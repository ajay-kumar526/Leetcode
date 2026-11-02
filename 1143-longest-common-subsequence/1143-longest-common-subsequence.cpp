//By Recursion->
// class Solution {
// public:
//     int helper(string text1, string text2, int m, int n){
//        //Base Case-> jab dono string hi nhi hongi 
//         if(m==0 ||n==0) return 0;
//         //Choice diagram 
//         if(text1[m-1]==text2[n-1]){ return 1+helper(text1, text2,m-1,n-1);}
//         else return max(helper(text1, text2,m,n-1),helper(text1, text2,m-1,n));
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int m = text1.length();
//         int n= text2.length();
//        return  helper(text1,text2,m,n);
        
//     }
// };
//Memoization(Top-Down)
class Solution {
public:
    int t[1001][1001];
    int helper(string &text1, string &text2, int m, int n){
       //Base Case-> jab dono string hi nhi hongi 
        if(m==0 ||n==0) return 0;
        if(t[m][n]!=-1) return t[m][n];
        //Choice diagram 
        if(text1[m-1]==text2[n-1]){ return t[m][n]=1+helper(text1, text2,m-1,n-1);}
        else return  t[m][n]=max(helper(text1, text2,m,n-1),helper(text1, text2,m-1,n));
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(t,-1,sizeof(t));
        int m = text1.length();
        int n= text2.length();
       return  helper(text1,text2,m,n);
        
    }
};