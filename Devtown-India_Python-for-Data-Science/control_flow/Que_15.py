# Use zip to transpose data from a 4-by-3 matrix to a 3-by-4 matrix

data = ((0, 1, 2), (3, 4, 5), (6, 7, 8), (9, 10, 11))

data_transpose = list(zip(*data)) # replace with your code
print(data_transpose)