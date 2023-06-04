"""
Suppose you want to count from some number start_num by another number count_by until you hit a final number end_num.
Use break_num as the variable that you'll change each time through the loop.
For simplicity, assume that end_num is always larger than start_num and count_by is always positive.
"""

start_num = 5
end_num = 30
count_by = 3
break_num = start_num

# write a while loop that uses break_num as the ongoing number to 
#   check against end_num
while break_num <= end_num:
        break_num += count_by

print(break_num)