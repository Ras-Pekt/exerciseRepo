#!/usr/bin/python3

from requests_html import HTMLSession
import json

url = "https://www.tripadvisor.com/Attractions-g294210-Activities-zft11309-Mombasa_Coast_Province.html"
home_url = "https://www.tripadvisor.com"

session = HTMLSession()

response = session.get(url).html

places = response.find("div.XfVdV")
reviews = response.find("div.jVDab.o.W.f.u.w.JqMhy")
categories = response.find("div.alPVI.eNNhq.PgLKC.tnGGX.yzLvM")
links = response.find("div.alPVI.eNNhq.PgLKC.tnGGX")

place_list = []
review_list = []
category_list = []
link_list = []

for place in places:
    place_list.append(place.text)

for review in reviews:
    review_list.append(review.text)

for category in categories:
    category_text = category.text.replace("\nOpen now", "").replace("\u2022", "-")
    category_list.append(category_text)

for link in links:
    if link.links:
        new_link = list(link.links)[0].replace("#REVIEWS", "")
        link_list.append(f"{home_url}{new_link}")

activities_json = []
range_len = len(place_list)

for i in range(range_len):
    activities_dict = {}

    activities_dict["place"] = place_list[i]
    activities_dict["review"] = review_list[i]
    activities_dict["category"] = category_list[i]
    activities_dict["link"] = link_list[i]

    activities_json.append(activities_dict)

with open("activities.json", "w") as file:
    json.dump(activities_json, file, indent=2)
