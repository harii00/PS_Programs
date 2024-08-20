# Neon number is a number in which the sum of the digits of square of the number is equal to the number

n=int(input())
num=n
sum=0
m=num*num
while (m!=0):
    digit=m%10
    digit=digit%10
    sum+=digit        
    m=m//10

if(sum == n ):
    print("Yes these are NEON numbers")
else:
    print("Theese are NON NEON numbers")
    