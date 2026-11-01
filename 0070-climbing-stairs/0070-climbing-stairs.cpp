// class Solution {
// public:
//     int climbStairs(int n) {
//       //Base case->smallest valid input
//       if( n<=3) return n;
//       return climbStairs(n-2)+climbStairs(n-1);

//     }
// };
//Memoization
// class Solution {
// public:
//     int t[46];
//     int solve(int n){
//      //Base case->smallest valid input
//       if( n<=3) return n;
//       if(t[n]!=-1) return t[n];
//       return t[n]= solve(n-2)+solve(n-1);
//     } 
//     int climbStairs(int n) {
//        memset(t,-1,sizeof(t));
//        return solve(n);
//      }
// };
//Tabulation
// class Solution {
// public:
//     int t[46];
    
//     int climbStairs(int n) {
//         //Base case
//        t[1]=1,t[2]=2;
//        for(int i=3;i<n+1;i++){
//          t[i]= t[i-2]+t[i-1];
//        }
     
//       return t[n];
      
//      }
// };
//Space optimization
class Solution {
public:
    int t[46];
    
    int climbStairs(int n) {
        //Base case
        t[1]=1,t[2]=2;
       for(int i=3;i<n+1;i++){
         t[i]= t[i-2]+t[i-1];
       }
     
      return t[n];
      
     }
};