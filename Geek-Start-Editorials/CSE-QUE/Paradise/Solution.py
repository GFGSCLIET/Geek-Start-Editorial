n = int(input())
l = list(map(int,input().split()))

a = [0]*n
j =0 
for i in l:
    if i !=0:
        a[j]+=i
        j+=1

for i in a:
    print(i,end=" ")
