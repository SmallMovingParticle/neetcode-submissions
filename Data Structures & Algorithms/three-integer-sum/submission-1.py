class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        j=len(nums)-1 
        res=set()

        for i in range (len(nums)-2):
            k=i+1
            j=len(nums)-1
            while(k<j):
                if(nums[i] + nums[j] + nums[k] == 0):
                    res.add(tuple([nums[i], nums[j], nums[k]]))
                    k+=1
                    j-=1
                elif(nums[i] + nums[j] + nums[k] > 0):
                    j-=1
                else:
                    k+=1

        return [list(t) for t in res]