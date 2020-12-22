t = int(input())

for _ in range(t):
    num = list(bin(int(input())))[2:]
    
    if num.count('1') % 2 == 0:
        print(0)
    else:
        print(1)