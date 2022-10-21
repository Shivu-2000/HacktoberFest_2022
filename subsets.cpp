class Solution {
public:
        
        vector<vector<int>> ans;
        
        void makesubsets(vector<int>& nums,int i,vector<int> temp){
                if(i>=nums.size()){
                        ans.push_back(temp);
                        return;
                }
                makesubsets(nums,i+1,temp);
                temp.push_back(nums[i]);
                makesubsets(nums,i+1,temp);
        }
        
        
    vector<vector<int>> subsets(vector<int>& nums) {
            vector<int> temp;
            makesubsets(nums,0,temp);
        return ans;
    }
};
