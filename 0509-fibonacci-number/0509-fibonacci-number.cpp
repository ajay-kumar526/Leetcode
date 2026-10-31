// class Solution {
// public:
//     int fib(int n) {
//         if(n<=1)return n;
//         return fib(n-1)+fib(n-2);
//     }
// };
//Memoization
// class Solution {
// public:
//     int t[31];
//     int fib(int n) {
//         memset(t,-1,sizeof(t));
//         if(n<=1)return n;  //Base case
//         if(t[n]!=-1) return t[n];
//         return t[n]= fib(n-1)+fib(n-2);
//     }
// };
//Tabulation
class Solution {
public:
    int t[31];
    int fib(int n) {
     
         t[0]=0,t[1]=1;
        for(int i=2;i<n+1;i++){
          t[i]= t[i-1]+t[i-2];
        }
      return t[n]; 
    }
};