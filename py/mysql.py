import pymysql

db = pymysql.connect("10.243.71.93","root","hadoop1234","zymysql")
cursor = db.cursor()
cursor.execute("select version()")
data = cursor.fetchone()
print(data)
db.close



#-*- coding: utf-8 -*-

from impala.dbapi import connect

conn = connect(host='192.168.1.188', port=21050)
#conn = connect(host=host, port=prot_impala, user='', password='', auth_mechanism='')
cur = conn.cursor()
cur.execute('select name from user limit 10')
data_list=cur.fetchall()

for data in data_list:
    print("用户名称:" + str(data[0]))

