"""
Write a function named readable_timedelta.
The function should take one argument, an integer days, 
and return a string that says how many weeks and days that is.
"""

# write your function here
def readable_timedelta(days):
        weeks = days // 7
        rem_days = days % 7
        
        return f"{weeks} week(s) and {rem_days} day(s)"

# test your function
print(readable_timedelta(365))