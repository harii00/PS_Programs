import math
def is_KM(n):
    num=n
    sum=0
    while num!=0:
        digit=num%10
        sum=sum + math.factorial(digit)
        num=num//10
    if sum==n:
        return n
        
# n=int(input())
lst=[]
for i in range(100000):
    if is_KM(i):
        lst.append(i)
        
print(lst)