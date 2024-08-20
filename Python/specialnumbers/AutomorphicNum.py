# Automorphic number is a number which contained in the last digits of its square
# eg -> 25 is the last digits of its square 625

num=int(input())
flag=0
q=num*num
while (num!=0):
    d1=num%10
    d2= q % 10
    if d1!=d2:
        flag=1    
    num=num//10
    q=q//10
if(flag==0 ):
    print("Automorphic numbers")
else:
    print("Non Automorphic numbers")
    