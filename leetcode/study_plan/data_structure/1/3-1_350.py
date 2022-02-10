# 350. Intersection of Two Arrays II

import collections

nums1 = [1,2,2,1]
nums2 = [2,2,3]
a = list((collections.Counter(nums1) & collections.Counter(nums2)).elements())
print(a)