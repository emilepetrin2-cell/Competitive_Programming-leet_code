#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> vus;

        for (int i : nums) {
            if (vus.find(i) != vus.end()) {
                return true;
            }
            vus.insert(i);
        }

        return false;
    }
};