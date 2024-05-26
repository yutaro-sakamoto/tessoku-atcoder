[N, Q] = map(int, input().split())
A = list(map(int, input().split()))
L = []
R = []

acc = 0
accA = []
for i in range(N):
    acc += A[i]
    accA.append(acc)

for i in range(Q):
    [L, R] = map(int, input().split())
    if L > 1:
        print(accA[R-1] - accA[L-2])
    else:
        print(accA[R-1])