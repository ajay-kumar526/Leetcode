class Solution {
public:
    bool isPalindrome(string s) {
     string temp="";
     for(int i=0;i<s.size();i++){
        if((s[i]>='A' && s[i]<='Z') || 
             (s[i]>='a' && s[i]<='z')  ||
             (s[i]>='0' && s[i]<='9') ){

                 if(s[i]>='A' && s[i]<='Z'){
                   s[i]+=32;
                   }

        temp.push_back(s[i]);
        }
    } 
    int l=0, r=temp.size()-1;
    while(l<=r){
       if(temp[l]==temp[r]){
          l++;
          r--;             }
        else   return false;
    }
    return true;
    }
};