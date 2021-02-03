sum = int(input())
C = 60*5
B = 60
A = 10
c = b = a = 0
while sum >0:
    if sum>C:
        sum -= C
        c = c +1
    elif sum > B:
        sum -= B
        b = b +1
    else:
        sum -= A
        a = a +1

if sum < 0:
    print("-1")
else:
    print(c, b, a)