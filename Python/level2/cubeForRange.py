number=int(input("enter the number of list elements : "))
start=int(input("Enter the start value : "))
end=start+number
lst=[]
for i in range(start,end):
    val=i*i*i
    lst.append(val)
print(lst)

# n=int(input())
# m=int(input())
# count =0
# for i in range(n,m+1):
#     z=i**2 
#     count+=z
# print(count)