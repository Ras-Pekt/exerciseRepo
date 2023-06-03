# A for loop that iterates over a list of strings, tokens, and counts how many of them are XML tags

#tokens = ['', 'Hello World!', '']
tokens = ["<html>", "This is some text.", "<body>", "<p>", "More text.", "</p>", "</body>", "</html>"]
count = 0

# write your for loop here
for token in tokens:
        if (token.startswith("<") and token.endswith(">")):
                print(token)
                count += 1
print(count)