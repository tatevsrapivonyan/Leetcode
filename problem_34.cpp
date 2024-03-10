#include <vector>

std::vector<int> searchRange(std::vector<int>& nums, int target) {
	int left = 0;
        int right = nums.size() - 1;
        std::vector<int> ans {};
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] == target) {
                ans.push_back(i);
            }
            if(nums[i] > target) {
                break;
            }
        }

        if(ans.size() > 0) {
            return {ans[0], ans[ans.size() - 1]};
        }
        return {-1, -1};
}
