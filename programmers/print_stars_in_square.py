# º°Âï±â
a, b = map(int, input().strip().split(' '))
c = list(map(lambda x : "*" * a, range(b)))
for i in c:
    print(i)