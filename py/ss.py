
class ss:
    server=''
    server_port=''
    password=''
    method=''
    timeout=5

    def __init__(self,server,server_port,password,method):
        self.__server=server
        self.__server_port=server_port
        self.__password=password
        self.__method=method
        self.__timeout=5


    def __str__(self):
        return "{\n\"server\":\"%s\",\n\"server_port\":%s,\n\"password\":\"%s\",\n\"method\":\"%s\",\n\"timeout\":%s\n}"%(self.__server,self.__server_port,self.__password,self.__method,self.__timeout)






outStr='''
{
  "configs": [

'''

filename='C:\\Users\\Asus\\Downloads\\ss.csv'
with open(filename,encoding='utf-8') as ssf:
    for i, line in enumerate(ssf):
        if i!=0:
            outStr+=","
        sa=line.split(',')
    # print(sa[0]+sa[1]+sa[2]+sa[3])
        sss=ss(sa[0],sa[1],sa[2],str.strip(sa[3]))
    # print(i)
        outStr+=str(sss)
  
    # print(json.dumps(sss, default=lambda obj: obj.__dict__, sort_keys=True, indent=4))

endStr='''
],
  "strategy": null,
  "index": 1,
  "global": true,
  "enabled": true,
  "shareOverLan": false,
  "isDefault": false,
  "localPort": 1080,
  "pacUrl": null,
  "useOnlinePac": false,
  "secureLocalPac": true,
  "availabilityStatistics": false,
  "autoCheckUpdate": true,
  "checkPreRelease": false,
  "isVerboseLogging": false,
  "logViewer": {
    "topMost": false,
    "wrapText": false,
    "toolbarShown": false,
    "Font": "Consolas, 8pt",
    "BackgroundColor": "Black",
    "TextColor": "White"
  },
  "proxy": {
    "useProxy": false,
    "proxyType": 0,
    "proxyServer": "",
    "proxyPort": 0,
    "proxyTimeout": 3
  },
  "hotkey": {
    "SwitchSystemProxy": "",
    "SwitchSystemProxyMode": "",
    "SwitchAllowLan": "",
    "ShowLogs": "",
    "ServerMoveUp": "Ctrl+Up",
    "ServerMoveDown": "Ctrl+Down"
  }
}
'''   

outStr+=endStr
with open("C:\\Users\\Asus\Desktop\\tools\\ss\\gui-config.json",'w',encoding='utf-8') as con:
  con.write(outStr)
print(outStr)