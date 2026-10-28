class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> nums1;
        vector<int> nums2;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                nums1.push_back(nums[i]);
            } else {
                nums2.push_back(nums[i]);
            }
        }

        int idx1 = 0, idx2 = 0;

        while (idx1 < nums1.size() && idx2 < nums2.size()) {
            ans.push_back(nums1[idx1++]);
            ans.push_back(nums2[idx2++]);
        }

        return ans;
    }
};