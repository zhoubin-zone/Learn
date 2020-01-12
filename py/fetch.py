import requests
import gzip
import brotli
import json
from bs4 import BeautifulSoup
from io import StringIO



url = 'https://free-ss.site/data3.php'
    
header = {
        'authority':'free-ss.site',
        'method':'POST',
        'path':'/data3.php',
        'scheme':'https',
        'accept':'*/*',
        'accept-encoding':'gzip',
        'accept-language':'zh-CN,zh;q=0.9',
        'content-length':'585',
        'content-type':'application/x-www-form-urlencoded; charset=UTF-8',
        'cookie':'__cfduid=d51da1249b1189ea83c80d95c694e38cf1576378649; _ga=GA1.2.1530938279.1576378651; _gid=GA1.2.1634467262.1576378651; _gat_gtag_UA_141764995_1=1',
        'origin':'https://free-ss.site',
        'referer':'https://free-ss.site/',
        'sec-fetch-mode':'cors',
        'sec-fetch-site':'same-origin',
        'user-agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.79 Safari/537.36',
        'x-requested-with':'XMLHttpRequest',
    }
    # for key in header:
    #     req.add_header(key, header[key])

data ='a=d1c576fa3b8e3933&b=1c5830b4a6d2e97f&c=1020f825e0057b44&t=03AOLTBLRuO4OACPVJRGxIlcIKuhQAg5Mn-NeEpP6iea4RAeTP843VNd4g6nmc7JOKZRFCp5ghlmgYypCVEZVKjcnxjXdjMfK0a5pXNyFjIL4rMfPc8_j704sNOAtPILUEQf1NlZG2fhmLT0vf0G0LbKWvXqqq62tZUVVA-iG9vCoMiRBAGSScz5xQOmFQkN3-TDmbWnheNrkieORRqSvKNwXNtFGSD3_zCNZmGpYscS9oZ-LJ7INRnYx9ZST7fKMH1U1ip3Uw9UMvPec-HUzjNduXiH8pKwk7CLMpxVwMZlpYa2HjQTq4ePusrlbwATMqnZDNJXG9R-w5ig1rO7HLxrReJU3IE23HNaWNrMKGowy9NER2M6sYZ0K7HPwnhS0F019HJ7DNT8qW6cqI5_-fJh0ROg6xxF7hl3W368YMcwB4zYkhcdhMtdHxQrUvKrq5ePXoozN6qdNhEd3zl0Q7P-5r6M65nNNsHx1STnI-yxDmc2zQJOvsfvS7sWvinMadaXRJeJKCG0kS'
req = requests.post(url , data=data,headers = header,timeout=5)
req.encoding='utf-8'
print(req.text)




