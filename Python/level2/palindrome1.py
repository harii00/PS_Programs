# n=input()
# m=n[::-1]
# print("palindrome" if (n==m) else "not pali")


num = input()
a = list(num) 
n = list(num)
print(n)
print(a)
n.reverse()
print(n)
print(a)
if a == n:
    print("Palindrome")
else:
    print("Not a palindrome")

# a = input()
# arr = [i for i in input().split('#') ]
# print(arr)
    
# x, y = map(int, input().split())
# print(y)