class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n, 0);
        int PostIndx = 0;
        int NegIndx = 1;
        for(int i = 0; i<n; i++){
            if(nums[i] < 0){
             ans[NegIndx] = nums[i];
             NegIndx += 2;
            }
            else{
               ans[PostIndx] = nums[i];
               PostIndx += 2;


            }
        }
        return ans;
    }
};