class Solution {
public:
    stack<int>st;
    string removeDuplicates(string s) {
    
      for(int i=0;i<s.size();i++){
          if(!st.empty() && s[i]==st.top()){st.pop();}
          else st.push(s[i]);
      }
      string ans="";
      while(st.size()>0) {
        ans+=st.top();
        st.pop();
      } 
    reverse(ans.begin(),ans.end());
    return ans;
    }
};

// Galti-> how to handle empty stack
//ans-> check !st.empty() first. (VVImp  line)
