#!/usr/bin/python3

from bs4 import BeautifulSoup as bs
import requests
import csv

csv_file = open('jumia.csv', 'w')
csv_writer = csv.writer(csv_file)
csv_writer.writerow(['Product Name', 'Old Price', 'New Price', 'Reviews', 'Stars' 'Percent Discount'])

url = "https://www.jumia.co.ke/electronic-television-video/"

response = requests.get(url).text
soup = bs(response, 'lxml')


articles = soup.find_all('article', class_='c-prd')

for article in articles:
    try:
        product_name = article.find('h3', class_='name').text.strip()
        # print(f"NAME OF PROD: {name}")
    except:
        name = ""

    try:
        # stars = article.find('div', class_='stars _s').text.strip()
        stars_output = article.find('div', class_='stars _s')
        stars_text = stars_output.find_all(text=True, recursive=False)
        stars = ' '.join(stars_text).strip()
        print(f"STARS: {stars}")
    except:
        stars = ""

    try:
        # reviews_text = article.find('div', class_='rev').text
        # reviews = reviews_text.replace(stars, '').strip()
        reviews_output = article.find('div', class_='rev')
        reviews_text = reviews_output.find_all(text=True, recursive=False)
        reviews = ' '.join(reviews_text).strip()
        print(f"REVIEWS: {reviews}")
    except:
        reviews = "No Reviews"

    try:
        new_price = article.find('div', class_='prc').text.strip()
        # print(f"NEW PRICE: {new_price}")
    except:
        new_price = ""

    try:
        old_price = article.find('div', class_='old').text.strip()
        # print(f"OLD PRICE: {old_price}")
    except:
        old_price = ""

    try:
        percent_disc = article.find('div', class_='bdg _dsct _sm').text.strip()
        # print(f"PERCENT: {percent_disc}")
    except:
        percent_disc = ""

    csv_writer.writerow([product_name, old_price, new_price, reviews, stars, percent_disc])

csv_file.close()
