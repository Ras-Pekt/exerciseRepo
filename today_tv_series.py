#!/usr/bin/python3

from sys import argv, exit
from requests_html import HTMLSession

session = HTMLSession()

if len(argv) == 1:
    print(f"Usage: {argv[0]} search word")
    exit(1)

query = []
for i in range(1, len(argv)):
    query.append(argv[i])

query = " ".join(query)

payload = {
    "searchword": f"{query}"
}

url = "https://www.todaytvseries2.com/search-series"

search_response = session.post(url, data=payload)

tv_html = search_response.html
article = tv_html.find('article.uk-article4')

for art in article:
    if query not in art.text.lower():
        continue

    series_name = art.find('h1.uk-article-titletag')
    for name in series_name:

        series_link = name.find('a', first=True)
        search_link  = list(series_link.links)[0]

        full_url = f"https://www.todaytvseries2.com{search_link}"


        response = session.get(full_url)

        match = response.html.find('div.uk-margin')
        for m in match:
            row = m.find('div.row2')
            for r in row:
                title = r.find('div.cell2')
                print(f"TITLE: {art.text} - {title[0].text}")
                size = r.find('div.cell3')
                print(f"SIZE: {size[0].text}")
                quality = r.find('div.cell4')
                print(f"QUALITY: {quality[0].text}")
                download = r.find('div.cell4')
                download_link = list(download[0].links)[0]
                print(f"LINK: {download_link}")
                print()
