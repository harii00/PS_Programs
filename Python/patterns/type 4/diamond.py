n=5
for i in range(n-1):
    for j in range(i,n):
        print("  ",end="")
    for k in range(i+1):
        print("* ",end="")
    for a in range(i):
        print("* ",end="")
    print()

for i in range(n):
    for j in range(i+1):
        print("  ",end="")
    for k in range(i,n):
        print("* ",end="")
    for a in range(i,n-1):
        print("* ",end="")
    
    print()

# CHAT_GPT code-->
# n = 5
# # Upper half of the diamond
# for i in range(n):
#     for j in range(n - i - 1):  # Print leading spaces
#         print("  ", end="")
#     for k in range(2 * i + 1):  # Print stars
#         print("* ", end="")
#     print()  # Move to the next line

# # Lower half of the diamond
# for i in range(n - 1):
#     for j in range(i + 1):  # Print leading spaces
#         print("  ", end="")
#     for k in range(2 * (n - i - 1) - 1):  # Print stars
#         print("* ", end="")
#     print()  # Move to the next line
