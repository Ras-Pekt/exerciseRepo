state = "NY" #Either CA, MN, or NY
purchase_amount = 2500 #amount of purchase

if (state == "CA"): #provide conditional for checking state is CA
        tax_amount = .075
        total_cost = purchase_amount*(1+tax_amount)
        result = "Since you're from {}, your total cost is {}.".format(state, total_cost)

elif (state == "MN"):  #provide conditional for checking state is MN
        tax_amount = .095
        total_cost = purchase_amount*(1+tax_amount)
        result = "Since you're from {}, your total cost is {}.".format(state, total_cost)

elif (state == "NY"):  #provide conditional for checking state is NY
        tax_amount = .089
        total_cost = purchase_amount*(1+tax_amount)
        result = "Since you're from {}, your total cost is {}.".format(state, total_cost)

print(result)