import collections

class Solution:
    def findPairs(self, nums: list[int], k: int) -> int:
        res = 0
        c = collections.Counter(nums)
        for i in c:
            if k > 0 and i + k in c or k == 0 and c[i] > 1:
                res += 1
        return res
    
        # c = collections.Counter(nums)
        # return  sum(k > 0 and i + k in c or k == 0 and c[i] > 1 for i in c)
        
if __name__ == '__main__':
    s = Solution()
    print(s.findPairs([1,2,3,4,5], 2))