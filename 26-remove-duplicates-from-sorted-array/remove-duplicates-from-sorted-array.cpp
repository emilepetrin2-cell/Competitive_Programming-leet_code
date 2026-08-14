
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        // k représente la position où écrire le prochain élément unique
        int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            // Si le nombre actuel est différent du précédent, c'est un nouvel élément unique
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i]; // On place l'élément unique à la position k
                k++;               // On avance l'index k
            }
        }

        // On retourne le nombre d'éléments uniques
        return k;
    }
};