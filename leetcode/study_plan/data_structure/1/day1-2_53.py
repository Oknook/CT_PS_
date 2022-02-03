nums = [-2,1,-3,4,-1,2,1,-5,4]
# def maxSubArray(self, nums: List[int]) -> int:
n = len(nums)
maxSum = -1e8
currSum = 0

for i in range(0, n):
    currSum = currSum + nums[i]
    if(currSum > maxSum):
        maxSum = currSum
    if(currSum < 0):
        currSum = 0

# retrun maxSum
print(maxSum)