def run():
    arr = [[0]*16]*16

    for i in range(16):
        arr[i][0] = 1
        arr[i][i] = 1

        for j in range(1, i):
            arr[i][j] = arr[i-1][j] + arr[i-1][j-1]

    a, b = list(map(int, input().split()))
    print(arr[a][b])

for _ in range(int(input())):
    run()
