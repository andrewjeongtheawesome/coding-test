a = int(input())
for _ in range(a):
    input_list = list(map(str,input()))
    if((len(input_list) >= 6) and (len(input_list) <= 9)):
        print("yes")
    else:
        print("no")