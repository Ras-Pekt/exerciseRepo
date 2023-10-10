#!/usr/bin/python3

from bs4 import BeautifulSoup as bs
import requests
import csv


scrape_list = ['Dating And Seduction', 'Showbiz', 'Society', 'Sex Tips', 'Erotica']

csv_file = open('tukatiane.csv', 'w')
csv_writer = csv.writer(csv_file)
csv_writer.writerow(['Category', 'Article Title', 'Article Summary', 'Article Link'])

def get_categories():
    link_dict = {}

    response = requests.get("https://tukatiane.co.ke").text
    soup = bs(response, 'lxml')

    menu = soup.find('div', class_='menu-main-menu-container')

    for category in menu.find('ul', class_='menu').find_all('li'):
        category_name = category.text
        a_tag = category.a['href']

        if category_name in scrape_list:
            link_dict[category_name] = a_tag

    return link_dict


def print_category():
    link_dict = get_categories()

    for key, value in link_dict.items():
        print(key.upper())

        response = requests.get(value).text
        soup = bs(response, 'lxml')

        for article in soup.find_all('li', class_='infinite-post'):
            article_title = article.h2.text
            article_summary = article.p.text
            article_link = article.find('a')['href']

            print(f"{article_title}\n{article_summary}\n{article_link}\n")

            csv_writer.writerow([key.upper(), article_title, article_summary, article_link])

print_category()
csv_file.close()
