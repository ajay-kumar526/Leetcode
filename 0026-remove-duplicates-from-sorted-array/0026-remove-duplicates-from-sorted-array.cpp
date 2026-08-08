class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        //Insert all element into set ->set takes unique element into it 
        for(int i =0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        //Traverse whole set and put all set elements into that array 
        int index=0;
        for(auto it :st){
            nums[index]=it;
            index++;
        }
        return index;
    }
};