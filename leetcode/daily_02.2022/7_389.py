class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        ans = 0
        for x in t: ans += ord(x)
        for x in s: ans -= ord(x)
        return chr(ans)
    
    def findTheDifference2(self, s: str, t: str) -> str:
        ans = 0
        # for x in s: ans ^= ord(x)
        # for x in t: ans ^= ord(x)
        for x in s+t: ans ^= ord(x)
        return chr(ans)
    
if __name__ == "__main__":
    s = Solution()
    st = "bakbsbremotebhrithnlebhtseltirsheritlerusob"
    t = "bakbsbremotebjhrithnlebhtseltirsheritlerusob"
    print(s.findTheDifference(st, t))
    print(s.findTheDifference2(st, t))