class Solution:
    def addDigits(self, num: int) -> int:
        while (int(num) >= 10):
            num = sum(int(n) for n in str(num))
        return num
    
if __name__ == "__main__":
    s = Solution()
    print(s.addDigits(input("input number : ")))