"""
Write a loop with a break statement to create a string, news_ticker, that is exactly 140 characters long.
You should create the news ticker by adding headlines from the headlines list, inserting a space in between each headline.
If necessary, truncate the last headline in the middle so that news_ticker is exactly 140 characters long.
"""

headlines = ["Local Bear Eaten by Man",
             "Legislature Announces New Laws",
             "Peasant Discovers Violence Inherent in System",
             "Cat Rescues Fireman Stuck in Tree",
             "Brave Knight Runs Away",
             "Papperbok Review: Totally Triffic"]

news_ticker = ""
ticker_length = 0

for headline in headlines:
        if ticker_length + len(headline) + 1 <= 140:  # Check if there is enough space to add the next headline
                news_ticker += headline + " "
                ticker_length += len(headline) + 1
        else:
                remaining_space = 140 - ticker_length
                news_ticker += headline[:remaining_space]  # Truncate the last headline if necessary
                break

print(news_ticker)
