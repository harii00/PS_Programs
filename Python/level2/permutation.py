# def permute(data, left, right):
#     if left == right:
#         print(data)
#     else:
#         for i in range(left, right + 1):
#             # Swap the current index with the starting index
#             data[left], data[i] = data[i], data[left]
#             # Recurse with the next index as the starting index
#             permute(data, left + 1, right)
#             # Backtrack to restore the original list
#             data[left], data[i] = data[i], data[left]

# # Example list
# data = [1,2,3]
# n = len(data)
# permute(data, 0, n - 1)


import itertools

data = [1, 2, 3]
permutations = itertools.permutations(data)
for i in permutations:
    print(list(i))
