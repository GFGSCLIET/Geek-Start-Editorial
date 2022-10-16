
 
N = input();n= len(N) 
l = [int(N[i:j]) for i in range(n) for j in range(i+1,n+1) if int(N[i:j])%2==0] 
print(max(l)) if len(l)>0 else print ("No")
