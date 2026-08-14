class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        deja_vus = {} 
        
        for index, num in enumerate(nums):
            complement = target - num
            
            if complement in deja_vus:
                return [deja_vus[complement], index]
                
            deja_vus[num] = index