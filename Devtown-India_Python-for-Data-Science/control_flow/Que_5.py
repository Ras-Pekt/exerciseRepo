# A or loop that iterates over the names list to create a usernames list
# To create a username for each name, make everything lowercase and replace spaces with underscores

names = ["Joey Tribbiani", "Monica Geller", "Chandler Bing", "Phoebe Buffay"]
usernames = []

# write your for loop here
for name in names:
        username = name.lower().replace(" ", "_")
        usernames.append(username)

print(usernames)

for username in usernames:
        print(username)
