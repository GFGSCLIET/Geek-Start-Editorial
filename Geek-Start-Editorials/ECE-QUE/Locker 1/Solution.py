n = int(input()) 
l = list(map(int,input().split())) 
 
s1 = n*(n+1)//2 
s2 = sum(l) 
 
print(s1-s2)
