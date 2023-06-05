"""
Write a python function find max(a/b) for all (a,b) belongs to {x1, x2, x3}, 
where x1, x2 and x3 are the numbers passed as an argument to the function.
"""

def find_max(a, b, c):
	arr = (a, b, c)
	arr_combo = []
	for a in arr:
		for b in arr:
			arr_combo.append(a / b)
	
	return max(arr_combo)

print(find_max(2, 4, 6))