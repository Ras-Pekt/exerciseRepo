"""
Use enumerate to modify the cast list so that each element
contains the name followed by the character's corresponding income in $ 1000.
For example, the first element of cast should change from "Barney Stinson" to "Barney Stinson 150".
"""

cast = ["Barney Stinson", "Robin Scherbatsky", "Ted Mosby", 
        "Lily Aldrin", "Marshall Eriksen"]
heights = [150, 100, 40, 0, 80]

# write your for loop here
for i, c in enumerate(cast):
        cast[i] = f"{c} {heights[i]}"

print(cast)
     