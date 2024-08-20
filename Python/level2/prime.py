n=int(input())
if n>1:
    for i in range(2,n):
        if n%i==0:
            print("non prime")
            break
        else:
            print("prime")
            break
else:
    print("non prime")