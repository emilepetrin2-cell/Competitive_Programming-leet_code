class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {

        std::unordered_map<int, int> dernierIndex; 

        for (int i = 0; i < nums.size(); i++) {
            int valeur = nums[i];
            if (dernierIndex.find(valeur) != dernierIndex.end()) {
                int ancienIndex = dernierIndex[valeur];
                if (i - ancienIndex <= k) {
                    return true;
                }
            }
            dernierIndex[valeur] = i;
        }
        return false;
    }
};