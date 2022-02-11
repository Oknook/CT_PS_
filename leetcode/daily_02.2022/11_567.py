from collections import Counter

s1 = "ab"
s2 = "eidboaoo"

def checkInclusion(self, s1: str, s2: str) -> bool:
    if (len(s1) > len(s2)): return False
    for p in range(0, len(s2)-len(s1)+1):
        if (Counter(s1) == Counter(s2[p:p+len(s1)])): return True
            
if checkInclusion(checkInclusion, s1, s2):
    print("@@@ true @@@")
else:
    print("@@@ false @@@")