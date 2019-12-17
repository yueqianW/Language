# f = float(input('qingshuru:'))

# c = (f - 32) / 1.8

# print('%.1f华氏度 = %.1f摄氏度' % (f, c))


for i in range(1, 10):
    for _ in (i, i + 1):
        print('%d*%d=%d' % (i, _, i*_), end='\t')
    print()
