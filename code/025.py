x = 1
y = 1
count = 2
while len(str(y)) != 1000:
    x, y = y, x + y
    count += 1
print count
