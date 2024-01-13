import sys
input = sys.stdin.readline
def my_round(num:float)->int:
    if num - int(num) >= 0.5:
        return int(num) + 1
    else:
        return int(num)

a = int(input())

if a != 0:
    test = []
    for _ in range(a):
        test.append(int(input()))

    test = sorted(test)
    ex = my_round(a*0.15)
    del test[0:ex]
    del test[(len(test) - ex):len(test)]
    print(my_round(float(sum(test) / len(test))))
else:
    print(0)




