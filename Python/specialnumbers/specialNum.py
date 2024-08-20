# a special number is anumber in which when the sum of the number is added to the
# product of the number then it will be equal to the original number eg->59

n=int(input())
num=n
sum=0
product=1
while (num!=0):
    digit=num%10
    sum=sum+digit
    product=product*digit
    num=num//10

if(sum + product == n ):
    print("Yes these are Special numbers")
else:
    print("Theese are not Special numbers")
    