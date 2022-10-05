
 
n = int(input()) 
a = bin(n)[2:] 
 
x ="" 
 
for i in a: 
    if i=="1": 
        x+="0" 
    else: 
        x+="1" 
 
print(x)
