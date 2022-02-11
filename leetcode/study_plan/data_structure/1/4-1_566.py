# 566. Reshape the Matrix

mat = [[1,2],[3,4]]
r = 1
c = 4

if len(mat)*len(mat[0]) != r*c :
    print(mat)
    
fullist = []
for sublist in mat:
    fullist += sublist

answer = []
for i in range(0, r):
    answer.append(fullist[c*i:c*i+c])
    
print(answer)