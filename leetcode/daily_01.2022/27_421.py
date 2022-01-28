class Solution:
    	def findMaximumXOR(self, nums: list[int]) -> int:
            maxvalue = 0
            mask = 0
            newset = set()

            for i in range(30, -1, -1):
                mask = mask | (1 << i)
                newMaxvalue = maxvalue | (1 << i)

                for i in range(len(nums)):
                    newset.add(nums[i] & mask)

                for prefix in newset:
                    if (newMaxvalue ^ prefix) in newset:
                        maxvalue = newMaxvalue
                        break
                newset.clear()
            return maxvalue

if __name__ == "__main__":
    # l1 - 28 / l2 - 127
    l1 = [3,10,5,25,2,8]
    l2 = [14,70,53,83,49,91,36,80,92,51,66,70]
    print(Solution().findMaximumXOR(l1))