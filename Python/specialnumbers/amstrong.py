n=int(input())
s=n
sum=0
while (s!=0):
    digit=s%10
    amst=digit**len(str(n))
    sum=sum+amst
    s=s//10
if (sum==n):
    print("Yes")
else:
    print("no")