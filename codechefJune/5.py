T = int(input())
for i in range(T):
    N = int(input())
    s = ''
    for k in range(1, N + 1):
        if k % 2 != 0:
            s = ''
            for j in range(1, N + 1):
                s = s + str(j + (k - 1)*N) + " "
            print(s)
        else:
            s = ''
            for m in range(0, N):
                s = s + str(N - m + (k - 1)*N)  + " "
            print(s)
