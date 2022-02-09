# 88. Merge Sorted Array

def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        nums1[m:] = nums2[:n]
        nums1.sort()
        
if __name__ == '__main__':
    nums1 = [1,2,3,0,0,0]
    m = 3
    nums2 = [2,5,6]
    n = 3
    merge(merge, nums1, m, nums2, n)
    
    for x in nums1:
        print(x)