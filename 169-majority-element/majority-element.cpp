class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int milieux = nums.size() /2;
        int valeur = nums[milieux];
        
        return valeur;

        }
        
    
};