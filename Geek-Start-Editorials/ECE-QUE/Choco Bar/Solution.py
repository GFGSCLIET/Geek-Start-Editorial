p = int(input()) 
l = [10,5] 
 
c = 0 
 
for i in l: 
    c = c + (p//i) 
    p = p%i 
 
print(c)
