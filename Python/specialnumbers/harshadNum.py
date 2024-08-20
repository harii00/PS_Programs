# Harshad number is a number in which the number is divisible by the sum of the digits

n=int(input())
num=n
sum=0
while (num!=0):
    digit=num%10
    sum=sum+digit    
    num=num//10

if(n%sum==0):
    print("Yes these are harshad numbers")
else:
    print("Theese are not harshad numbers")
    