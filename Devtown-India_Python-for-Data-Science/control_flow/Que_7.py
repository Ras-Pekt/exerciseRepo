# iterates over a list of strings and creates a single string, html_str, which is an HTML list

items = ['first string', 'second string', 'third string', 'fourth string', 'fifth string']
html_str = "\n"  # "\ n" is the character that marks the end of the line, it does
                     # the characters that are after it in html_str are on the next line

# write your code here
html_str= "<ul>" + html_str

for item in items:
        html_str += (f"<li>{item}</li>\n")

html_str += "</ul>"

print(html_str)