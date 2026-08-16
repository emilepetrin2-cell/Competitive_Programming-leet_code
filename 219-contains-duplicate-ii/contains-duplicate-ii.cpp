#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_set<int> fenetre;

        for (int i = 0; i < nums.size(); i++) {
  
            if (i > k) {
                fenetre.erase(nums[i - k - 1]);
            }

            if (fenetre.find(nums[i]) != fenetre.end()) {
                return true;
            }

            fenetre.insert(nums[i]);
        }

        return false;
    }
};