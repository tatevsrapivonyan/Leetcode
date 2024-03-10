#include <vector>
#include <algorithm>

int removeDuplicates(std::vector<int>& nums) {
    nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
    size_t k {nums.size()};
    return k;
}