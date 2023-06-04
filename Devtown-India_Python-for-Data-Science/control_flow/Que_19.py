# Use a list comprehension to create a list of names passed that only include those that scored at least 65

scores = {
             "Deku": 70,
             "Bakugo": 35,
             "Tenya": 82,
             "Shoto": 23,
             "All Might": 98
          }

passed = [name for name, score in scores.items() if score >= 65] # write your list comprehension here
print(passed)