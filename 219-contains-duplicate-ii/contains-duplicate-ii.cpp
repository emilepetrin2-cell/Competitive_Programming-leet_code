#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_set<int> fenetre;

        for (int i = 0; i < nums.size(); i++) {
            // 1. Si la fenêtre dépasse la taille k, on retire le plus vieux
            if (i > k) {
                fenetre.erase(nums[i - k - 1]);
            }

            // 2. Si le nombre est déjà présent dans les k dernières cases
            if (fenetre.find(nums[i]) != fenetre.end()) {
                return true;
            }

            // 3. On ajoute le nombre actuel
            fenetre.insert(nums[i]);
        }

        return false;
    }
};