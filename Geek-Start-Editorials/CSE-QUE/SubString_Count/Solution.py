
 
s = input() 
k = int(input()) 
n = len(s) 
 
l = [s[i:j] for i in range(n) for j in range(i+1,n+1) if len(set(s[i:j]))==k] 
 
print(len(l))
