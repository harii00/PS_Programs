# A number is said to be a spy number if the sum of the digits 
# of the number and the product of the digits of the number are the same

n=int(input())
num=n
sum=0
product=1
while (num!=0):
    digit=num%10
    sum=sum+digit
    product=product*digit
    num=num//10

if(sum == product ):
    print("Yes these are spy numbers")
else:
    print("Theese are not Spy numbers")
    