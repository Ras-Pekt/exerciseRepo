# Use a list comprehension to create a new list first_names containing just the first names in names in lowercase

names = ["Barney Stinson", "Robin Scherbatsky", "Ted Mosby", 
        "Lily Aldrin", "Marshall Eriksen"]

first_names = [name.split()[0].lower() for name in names] # write your list comprehension here
print(first_names)
     