n=5
p=1
for i in range(n):
    # p=1
    for j in range(i,n):
        print("  ",end="")
    for i in range(i+1):
        print(p,"",end="")
        # p+=1
    for k in range(i):
        print(p,"",end="")
        # p+=1
    p+=1
    print()