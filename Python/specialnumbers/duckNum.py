# if a number has zero in it then it is called a duck number

n=int(input())
num=n
count=0
while (n!=0):
    digit=n%10
    if(digit==0):
        count+=1
    n=n//10
if (count>0):
    print("Duck number")
else:
    print("Non duck number")    