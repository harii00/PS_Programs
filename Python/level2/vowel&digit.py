String = input()
v = 0
n = 0

for i in String:
    if i in 'aeiouAEIOU':
        v += 1
    elif i.isdigit():
        n += 1
   
print("Vowel count is : ", v)
print("Number count is : " ,n)