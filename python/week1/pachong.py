import urllib2

print(
    urllib2.urlopen(
        urllib2.Request("http://www.baidu.com")
    )
)
