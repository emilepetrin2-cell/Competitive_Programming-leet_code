class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2; // Milieu

            if (nums[mid] == target) {
                return mid; // Trouvé exactement au milieu
            } else if (nums[mid] < target) {
                left = mid + 1; // Chercher dans la moitié droite
            } else {
                right = mid - 1; // Chercher dans la moitié gauche
            }
        }

        // Si non trouvé, 'left' pointe exactement à l'index d'insertion
        return left;
    }
};