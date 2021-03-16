a = int(input())
result = 1
i = 1;
if a == 1:
    print(1)
else:
    while result < a:
        result += (6*i)
        i += 1
    print(i)