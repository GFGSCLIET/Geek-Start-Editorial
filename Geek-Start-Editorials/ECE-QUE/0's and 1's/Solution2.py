#2 using user defined method:
def binary(n):
    if n == 0:
        return "0"
    a=[]
    while(n>0):
        dig=n%2
        a.append(dig)
        n=n//2
    return a[::-1]

n = int(input())
a = binary(n)

x =""

for i in a:
    if i==1:
        x+="0"
    else:
        x+="1"

print(x)
