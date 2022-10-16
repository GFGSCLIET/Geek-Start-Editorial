n = int(input())
l = list(map(int,input().split()))
p = 0

for i in range(n):
    for j in range(i+1,n):
        if l[j]>l[i]:
            p = max(l[j] - l[i],p)

print(p)
