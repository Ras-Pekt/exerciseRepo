
"""
Write a function named population_density that takes two arguments, 
population and land_area, and returns a population density calculated from those values.
"""

# write your function here
def population_density(population, land_area):
        pop_density = population / land_area
        return pop_density

# test cases for your function
test1 = population_density(10, 1)
expected_result1 = 10
print("expected result: {}, actual result: {}".format(expected_result1, test1))

test2 = population_density(864816, 121.4)
expected_result2 = 7123.6902801
print("expected result: {}, actual result: {}".format(expected_result2, test2))
     