D = int(input())
N = int(input())

X = [0] * D

for i in range(N):
    [L, R] = map(int, input().split())
    if L - 1 >= 0:
        X[L - 1] += 1
    if R < D:
        X[R] -= 1

acc = 0
for i in range(D):
    acc += X[i]
    print(acc)