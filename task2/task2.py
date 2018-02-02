current = 1
previous = 0
summary = 0
while current + previous < 4000000:
    if current % 2 == 0:
        summary += current
    temp = current
    current += previous
    previous = temp
print(summary)
