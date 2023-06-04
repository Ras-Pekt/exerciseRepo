# An if statement that lets a student know which of these grades they got based on the number they got in exams

marks = 91  # use this input to make your submission

# write your if statement here

if (marks <= 100 and marks > 90 ):
        print("Grade: A+")
elif (marks <= 90 and marks > 80 ):
        print("Grade: A")
elif (marks <= 80 and marks > 70 ):
        print("Grade: B")
elif (marks <= 70 and marks > 60 ):
        print("Grade: C")
elif (marks <= 60 and marks > 50 ):
        print("Grade: D")
elif (marks <= 50 and marks > 40 ):
        print("Grade: E")
elif (marks <= 40 and marks > 0 ):
        print("Grade: F")
else:
        print("Invalid marks")