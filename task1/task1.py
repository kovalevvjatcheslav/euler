summary = 0
for i in range(1, 1000):
    if i % 3 == 0:
        summary += i
    if i % 5 == 0:
        summary += i
print(summary)
