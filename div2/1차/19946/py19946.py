num = int(input())
flag = 0
total = 0
while num != 0:
    if num %2 == 1:
        flag = total
        num = num - 1
    else:
        num /=2
        total = total + 1

print(total)

