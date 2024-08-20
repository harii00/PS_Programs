# a=input()
# y=len(a)
# count=0
# for i in range(y):
#     z=ord(a[i])-ord('0')
#     if(z%2==0):
#         count+=1
#         continue
#     else:
#         print(a[i],end='')
# if(count==y):
#     print("0")

n=input()
size=len(n)
count=0
for i in n:
    if (int(i)%2==0):
        count=count+1
        continue
    print(i,end="")
if(count==size):
    print(0)